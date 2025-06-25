#include "stdafx.h"
#include "ChromaThread.h"
#include <chrono>

using namespace ChromaSDK;
using namespace std;
using namespace std::chrono;

uintptr_t ReadPointerOffset(HANDLE procHandle, uintptr_t addy, int offset) {
	BYTE array[8];
	SIZE_T bytesRead;
	ReadProcessMemory(procHandle, (LPCVOID)(addy + offset), array, sizeof(array), &bytesRead);
	return *reinterpret_cast<uintptr_t*>(array);
}

uintptr_t ReadPointer(HANDLE procHandle, uintptr_t addy, const std::vector<int>& offsets) {
	uintptr_t intPtr = addy;
	for (auto offset : offsets) {
		intPtr = ReadPointerOffset(procHandle, intPtr, offset);
	}
	return intPtr;
}

std::vector<BYTE> ReadBytes(HANDLE procHandle, uintptr_t addy, size_t bytes) {
	std::vector<BYTE> array(bytes);
	SIZE_T bytesRead;
	ReadProcessMemory(procHandle, (LPCVOID)addy, array.data(), bytes, &bytesRead);
	return array;
}

BYTE ReadValue(HANDLE procHandle, const std::vector<int>& offsets, int valueOffset, uintptr_t moduleBase) {
	uintptr_t pointerAddress = ReadPointer(procHandle, moduleBase, offsets) + valueOffset;
	return ReadBytes(procHandle, pointerAddress, 1)[0];
}

bool WriteBytes(HANDLE procHandle, uintptr_t addy, int value) {
	SIZE_T bytesWritten;
	return WriteProcessMemory(procHandle, (LPVOID)addy, &value, 4, &bytesWritten);
}

bool WriteValue(HANDLE procHandle, const std::vector<int>& offsets, int valueOffset, uintptr_t moduleBase, int value) {
	uintptr_t pointerAddress = ReadPointer(procHandle, moduleBase, offsets) + valueOffset;
	return WriteBytes(procHandle, pointerAddress, value) != 0;
}

void updateSensitivity(HANDLE handle, int& initialSens, const std::vector<int> offsets, long baseOffset, uintptr_t baseAddress, bool condition) {
	int currentValue = ReadValue(handle, offsets, baseOffset, baseAddress);

	if (initialSens == NULL) {
		if (currentValue > 0) {
			initialSens = currentValue;
		}
	}
	else {
		if (condition && currentValue != initialSens) {
			initialSens = currentValue;
		}
	}
}

ChromaThread* ChromaThread::_sInstance = new ChromaThread();

ChromaThread::ChromaThread()
{
	_mThread = nullptr;
	_mWaitForExit = true;
	Start();
}

ChromaThread* ChromaThread::Instance()
{
	return _sInstance;
}

void ChromaThread::ProcessAnimations(float deltaTime)
{
	lock_guard<mutex> guard(_mMutex);

	// update animations
	vector<AnimationBase*> doneList = vector<AnimationBase*>();
	for (int i = 0; i < int(_mAnimations.size()) && _mWaitForExit; ++i)
	{
		AnimationBase* animation = _mAnimations[i];
		if (animation != nullptr)
		{
			animation->Update(deltaTime);
			// no need to update animations that are no longer playing
			if (!animation->IsPlaying())
			{
				doneList.push_back(animation);
			}
		}
	}

	for (int i = 0; i < int(doneList.size()) && _mWaitForExit; ++i)
	{
		AnimationBase* animation = doneList[i];
		if (animation != nullptr)
		{
			auto it = find(_mAnimations.begin(), _mAnimations.end(), animation);
			if (it != _mAnimations.end())
			{
				_mAnimations.erase(it);
			}
		}
	}
}

void ChromaThread::ChromaWorker()
{
	// get current time
	//high_resolution_clock::time_point timer = high_resolution_clock::now();
	//high_resolution_clock::time_point timerLast = high_resolution_clock::now();

	//_mWaitForExit = true;

	HWND hwnd = FindWindowA(NULL, "RAGE2");

	uintptr_t baseAddress = (uintptr_t)GetModuleHandle(L"RAGE2.exe");
	//long isInVehicleBaseOffset = 0x30;
	//const std::vector<int> isInVehicleOffsets = { 0x02D705F0, 0x48, 0x8, 0x28, 0xC08, 0x408, 0x8 };
	long isInVehicleBaseOffset = 0x1F0;
	const std::vector<int> isInVehicleOffsets = { 0x02D7F808, 0x18, 0x90, 0x10, 0x98, 0xA8, 0x160 };

	long SensitivtyBaseOffset = 0x4C8;
	const std::vector<int> SensitivtyOffsets = { 0x02D7D228, 0xD8, 0x18, 0x1C0, 0x410, 0x0 };

	long VSensitivtyBaseOffset = 0x4CC;
	const std::vector<int> VSensitivtyOffsets = { 0x02D7F8C0, 0x110, 0x5A0, 0x318, 0x160, 0x378 };

	int initialVSens = NULL;
	int initialXSens = NULL;

	bool revertSens = false;

	if (hwnd != NULL) {
		DWORD procID;
		GetWindowThreadProcessId(hwnd, &procID);
		HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);

		while (procID != NULL) {
			auto isInVehicle = ReadValue(handle, isInVehicleOffsets, isInVehicleBaseOffset, baseAddress);

			if (isInVehicle == 0) {
				//Get and store initial Sensitivity, let player change sens when on foot
				updateSensitivity(handle, initialVSens, VSensitivtyOffsets, VSensitivtyBaseOffset, baseAddress, !revertSens);
				updateSensitivity(handle, initialXSens, SensitivtyOffsets, SensitivtyBaseOffset, baseAddress, !revertSens);
			}

			if (isInVehicle != 0) {
				if (!revertSens) {
					//WriteValue(handle, VSensitivtyOffsets, VSensitivtyBaseOffset, baseAddress, 300);
					//WriteValue(handle, SensitivtyOffsets, SensitivtyBaseOffset, baseAddress, 100);
					revertSens = WriteValue(handle, SensitivtyOffsets, SensitivtyBaseOffset, baseAddress, 100) &&
						WriteValue(handle, VSensitivtyOffsets, VSensitivtyBaseOffset, baseAddress, 300);
				}
			}
			else {
				if (revertSens) {
					WriteValue(handle, VSensitivtyOffsets, VSensitivtyBaseOffset, baseAddress, initialVSens);
					WriteValue(handle, SensitivtyOffsets, SensitivtyBaseOffset, baseAddress, initialXSens);
					revertSens = false;
				}
			}
		}
	}


	//while (_mWaitForExit)
	//{
	//	// get current time
	//	//timer = high_resolution_clock::now();

	//	// get time in seconds
	//	//duration<double, milli> time_span = timer - timerLast;
	//	//float deltaTime = (float)(time_span.count() / 1000.0f);
	//	//timerLast = timer;

	//	//ProcessAnimations(deltaTime);

	//	if (!_mWaitForExit)
	//	{
	//		break;
	//	}

	//	this_thread::sleep_for(chrono::milliseconds(1));
	//}

	_mThread = nullptr;
}

void ChromaThread::Start()
{
	if (_mThread != nullptr)
	{
		return;
	}
	_mThread = new thread(&ChromaThread::ChromaWorker, this);
	_mThread->detach();
}

void ChromaThread::Stop()
{
	_mWaitForExit = false;

	lock_guard<mutex> guard(_mMutex);
	_mAnimations.clear();
}

void ChromaThread::AddAnimation(AnimationBase* animation)
{
	lock_guard<mutex> guard(_mMutex);
	// Add animation if it's not found
	if (find(_mAnimations.begin(), _mAnimations.end(), animation) == _mAnimations.end())
	{
		_mAnimations.push_back(animation);
	}

}

void ChromaThread::RemoveAnimation(AnimationBase* animation)
{
	lock_guard<mutex> guard(_mMutex);
	if (animation != nullptr)
	{
		auto it = find(_mAnimations.begin(), _mAnimations.end(), animation);
		if (it != _mAnimations.end())
		{
			_mAnimations.erase(it);
		}
	}
}

int ChromaThread::GetAnimationCount()
{
	lock_guard<mutex> guard(_mMutex);
	return _mAnimations.size();
}

int ChromaThread::GetAnimationId(int index)
{
	lock_guard<mutex> guard(_mMutex);
	if (index < 0)
	{
		return -1;
	}
	if (index < int(_mAnimations.size()))
	{
		AnimationBase* animation = _mAnimations[index];
		if (animation != nullptr)
		{
			return 1;
		}
	}
	return -1;
}
