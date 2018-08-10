// stdafx.cpp : source file that includes just the standard includes
// CChromaEditorLibrary.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
#include "CChromaEditorLibrary.h"
#include <map>
#include <sstream>
#include <thread>

using namespace ChromaSDK;
using namespace std;

/* Setup log mechanism */
static DebugLogPtr _gDebugLogPtr;

void LogDebug(const char* format, ...)
{
	return;
}
void LogError(const char* format, ...)
{
	return;
}
/* End of setup log mechanism */

void SetupChromaThread()
{
	return;
}

void StopChromaThread()
{
	return;
}

void ThreadOpenEditorDialog(bool playOnOpen)
{
	return;
}

extern "C"
{
	EXPORT_API void PluginSetLogDelegate(DebugLogPtr fp)
	{
		return;
	}

	EXPORT_API bool PluginIsPlatformSupported()
	{
		return false;//try that
	}

	EXPORT_API double PluginIsPlatformSupportedD()
	{
		return 0;
	}

	EXPORT_API bool PluginIsInitialized()
	{
		return true;
	}

	EXPORT_API double PluginIsInitializedD()
	{
		return 1;
	}

	EXPORT_API bool PluginIsDialogOpen()
	{
		return false;
	}

	EXPORT_API double PluginIsDialogOpenD()
	{
		return 0;
	}

	EXPORT_API int PluginOpenEditorDialog(const char* path)
	{

		return 0;
	}

	EXPORT_API double PluginOpenEditorDialogD(const char* path)
	{
		return 0;
	}

	EXPORT_API int PluginOpenEditorDialogAndPlay(const char* path)
	{

		return 0;
	}

	EXPORT_API double PluginOpenEditorDialogAndPlayD(const char* path)
	{
		return 0;
	}

	EXPORT_API const char* PluginGetAnimationName(int animationId)
	{
		
		return "";
	
	}

	EXPORT_API void PluginStopAll()
	{
		return;
	}

	EXPORT_API void PluginClearAnimationType(int deviceType, int device)
	{
		return;
	}

	EXPORT_API void PluginClearAll()
	{
		return;
	}

	EXPORT_API int PluginGetAnimationCount()
	{
		return 0;
	}

	EXPORT_API int PluginGetAnimationId(int index)
	{
		return -1;
	}

	EXPORT_API int PluginGetPlayingAnimationCount()
	{

		return 0;

	}

	EXPORT_API int PluginGetPlayingAnimationId(int index)
	{
		
		return -1;
		
	}

	EXPORT_API int PluginOpenAnimation(const char* path)
	{
		
		return -1;
	}

	EXPORT_API double PluginOpenAnimationD(const char* path)
	{
		return 0;
	}

	EXPORT_API int PluginLoadAnimation(int animationId)
	{
		
		return -1;
	}

	EXPORT_API void PluginLoadAnimationName(const char* path)
	{
		return;
	}

	EXPORT_API double PluginLoadAnimationD(double animationId)
	{
		return 0;
	}

	EXPORT_API int PluginUnloadAnimation(int animationId)
	{
		
		return 1;
	}

	EXPORT_API void PluginUnloadAnimationName(const char* path)
	{
		return;
	}

	EXPORT_API double PluginUnloadAnimationD(double animationId)
	{
		return 1;
	}

	EXPORT_API int PluginPlayAnimation(int animationId)
	{
		return 1;
	}

	EXPORT_API double PluginPlayAnimationD(double animationId)
	{
		return 1;
	}

	EXPORT_API bool PluginIsPlaying(int animationId)
	{
		return false;
	}

	EXPORT_API double PluginIsPlayingD(double animationId)
	{
		return 0;
	}

	EXPORT_API int PluginStopAnimation(int animationId)
	{
		return 1;
	}

	EXPORT_API double PluginStopAnimationD(double animationId)
	{
		return 1;
	}

	EXPORT_API int PluginCloseAnimation(int animationId)
	{
		return 1;
	}

	EXPORT_API double PluginCloseAnimationD(double animationId)
	{
		return 1;
	}

	EXPORT_API int PluginInit()
	{
		return 1;
	}

	EXPORT_API double PluginInitD()
	{
		return 1;
	}

	EXPORT_API int PluginUninit()
	{
		return 1;
	}

	EXPORT_API double PluginUninitD()
	{
		return 1;
	}

	EXPORT_API int PluginCreateAnimationInMemory(int deviceType, int device)
	{
		return 1;
	}

	EXPORT_API int PluginCreateAnimation(const char* path, int deviceType, int device)
	{
		return 1;
	}

	EXPORT_API int PluginSaveAnimation(int animationId, const char* path)
	{
		return 1;
	}

	EXPORT_API int PluginResetAnimation(int animationId)
	{
		return 1;
	}

	EXPORT_API int PluginGetFrameCount(int animationId)
	{
		return 0;
	}

	EXPORT_API int PluginGetFrameCountName(const char* path)
	{
		return 0;
	}

	EXPORT_API double PluginGetFrameCountNameD(const char* path)
	{
		return 0;
	}

	EXPORT_API int PluginGetCurrentFrame(int animationId)
	{
		return 0;
	}

	EXPORT_API int PluginGetCurrentFrameName(const char* path)
	{
		return 0;
	}

	EXPORT_API double PluginGetCurrentFrameNameD(const char* path)
	{
		return 0;
	}

	EXPORT_API int PluginGetDeviceType(int animationId)
	{
		return 1;
	}

	EXPORT_API int PluginGetDeviceTypeName(const char* path)
	{
		return 1;
	}

	EXPORT_API double PluginGetDeviceTypeNameD(const char* path)
	{
		return 1;
	}

	EXPORT_API int PluginGetDevice(int animationId)
	{
		return 1;
	}

	EXPORT_API int PluginGetDeviceName(const char* path)
	{
		return 1;
	}

	EXPORT_API double PluginGetDeviceNameD(const char* path)
	{
		return 1;
	}

	EXPORT_API int PluginSetDevice(int animationId, int deviceType, int device)
	{
		return 1;
	}

	EXPORT_API int PluginGetMaxLeds(int device)
	{
		return 1;
	}

	EXPORT_API double PluginGetMaxLedsD(double device)
	{
		return 0;
	}

	EXPORT_API int PluginGetMaxRow(int device)
	{
		return 0;
	}

	EXPORT_API double PluginGetMaxRowD(double device)
	{
		return 0;
	}

	EXPORT_API int PluginGetMaxColumn(int device)
	{
		return 0;
	}

	EXPORT_API double PluginGetMaxColumnD(double device)
	{
		return 0;
	}

	EXPORT_API int PluginAddFrame(int animationId, float duration, int* colors, int length)
	{
		return 0;
	}

	EXPORT_API int PluginUpdateFrame(int animationId, int frameIndex, float duration, int* colors, int length)
	{
		return 1;
	}

	EXPORT_API int PluginGetFrame(int animationId, int frameIndex, float* duration, int* colors, int length)
	{
		return 0;
	}

	EXPORT_API int PluginPreviewFrame(int animationId, int frameIndex)
	{
		return 0;
	}

	EXPORT_API void PluginPreviewFrameName(const char* path, int frameIndex)
	{
		return;
	}

	EXPORT_API double PluginPreviewFrameD(double animationId, double frameIndex)
	{
		return 0;
	}

	EXPORT_API int PluginOverrideFrameDuration(int animationId, float duration)
	{
		return 1;
	}

	EXPORT_API double PluginOverrideFrameDurationD(double animationId, double duration)
	{
		return 1;
	}

	EXPORT_API int PluginReverse(int animationId)
	{
		return 0;
	}

	EXPORT_API int PluginMirrorHorizontally(int animationId)
	{
		return 0;
	}

	EXPORT_API int PluginMirrorVertically(int animationId)
	{
		return 0;
	}


	EXPORT_API int PluginGetAnimation(const char* name)
	{
		return 0;
	}

	EXPORT_API double PluginGetAnimationD(const char* name)
	{
		return 0;
	}

	EXPORT_API void PluginCloseAnimationName(const char* path)
	{
		return;
	}

	EXPORT_API double PluginCloseAnimationNameD(const char* path)
	{
		return 0;
	}

	EXPORT_API void PluginCloseAll()
	{
		return;
	}

	EXPORT_API void PluginPlayAnimationLoop(int animationId, bool loop)
	{
		return;
	}

	EXPORT_API void PluginPlayAnimationName(const char* path, bool loop)
	{
		return;
	}

	EXPORT_API double PluginPlayAnimationNameD(const char* path, double loop)
	{
		
		return 0;
	}

	EXPORT_API void PluginPlayAnimationFrame(int animationId, int frameId, bool loop)
	{
		return;
	}

	EXPORT_API void PluginPlayAnimationFrameName(const char* path, int frameId, bool loop)
	{
		return;
	}

	EXPORT_API double PluginPlayAnimationFrameNameD(const char* path, double frameId, double loop)
	{
		
		return 0;
	}

	EXPORT_API void PluginStopAnimationName(const char* path)
	{
		return;
	}

	EXPORT_API double PluginStopAnimationNameD(const char* path)
	{
		
		return 0;
	}

	EXPORT_API void PluginStopAnimationType(int deviceType, int device)
	{
		return;
	}

	EXPORT_API double PluginStopAnimationTypeD(double deviceType, double device)
	{
		
		return 0;
	}

	EXPORT_API bool PluginIsPlayingName(const char* path)
	{
		return true;
	}

	EXPORT_API double PluginIsPlayingNameD(const char* path)
	{
		return 1;
	}

	EXPORT_API bool PluginIsPlayingType(int deviceType, int device)
	{
		return true;
	}

	EXPORT_API double PluginIsPlayingTypeD(double deviceType, double device)
	{
		return 1;
	}

	EXPORT_API void PluginLoadComposite(const char* name)
	{
		return;
	}

	EXPORT_API void PluginUnloadComposite(const char* name)
	{
		return;
	}

	EXPORT_API void PluginPlayComposite(const char* name, bool loop)
	{
		return;
	}

	EXPORT_API double PluginPlayCompositeD(const char* name, double loop)
	{
		return 1;
	}

	EXPORT_API void PluginStopComposite(const char* name)
	{
		return;
	}

	EXPORT_API double PluginStopCompositeD(const char* name)
	{
		return 0;
	}

	EXPORT_API void PluginCloseComposite(const char* name)
	{
		return;
	}

	EXPORT_API double PluginCloseCompositeD(const char* name)
	{
		
		return 0;
	}

	EXPORT_API int PluginGetKeyColor(int animationId, int frameId, int rzkey)
	{
		
		return 0;
	}

	EXPORT_API int PluginGetKeyColorName(const char* path, int frameId, int rzkey)
	{
		return 1;
	}

	EXPORT_API double PluginGetKeyColorD(const char* path, double frameId, double rzkey)
	{
		return 1;
	}

	EXPORT_API int PluginGet1DColor(int animationId, int frameId, int led)
	{
		
		return 0;
	}

	EXPORT_API int PluginGet1DColorName(const char* path, int frameId, int index)
	{
		return 1;
	}

	EXPORT_API double PluginGet1DColorNameD(const char* path, double frameId, double index)
	{
		return 1;
	}

	EXPORT_API int PluginGet2DColor(int animationId, int frameId, int row, int column)
	{
		
		return 0;
	}

	EXPORT_API int PluginGet2DColorName(const char* path, int frameId, int row, int column)
	{
		return 0;
	}

	EXPORT_API double PluginGet2DColorNameD(const char* path, double frameId, double row, double column)
	{
		return 0;
	}

	EXPORT_API void PluginSetKeyColor(int animationId, int frameId, int rzkey, int color)
	{
		return;
	}

	EXPORT_API void PluginSetKeyColorName(const char* path, int frameId, int rzkey, int color)
	{
		return;
	}

	EXPORT_API double PluginSetKeyColorNameD(const char* path, double frameId, double rzkey, double color)
	{
		return 0;
	}


	EXPORT_API void PluginSetKeyColorAllFrames(int animationId, int rzkey, int color)
	{
		return;
	}

	EXPORT_API void PluginSetKeyColorAllFramesName(const char* path, int rzkey, int color)
	{
		return;
	}

	EXPORT_API double PluginSetKeyColorAllFramesNameD(const char* path, double rzkey, double color)
	{
	
		return 0;
	}


	EXPORT_API void PluginSetKeysColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color)
	{
		return;
	}

	EXPORT_API void PluginSetKeysColorName(const char* path, int frameId, const int* rzkeys, int keyCount, int color)
	{
		return;
	}


	EXPORT_API void PluginSetKeysColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color)
	{
		return;
	}

	EXPORT_API void PluginSetKeysColorAllFramesName(const char* path, const int* rzkeys, int keyCount, int color)
	{
		return;
	}


	EXPORT_API void PluginSetKeyNonZeroColor(int animationId, int frameId, int rzkey, int color)
	{
		return;
	}

	EXPORT_API void PluginSetKeyNonZeroColorName(const char* path, int frameId, int rzkey, int color)
	{
		return;
	}

	EXPORT_API double PluginSetKeyNonZeroColorNameD(const char* path, double frameId, double rzkey, double color)
	{
		
		return 0;
	}


	EXPORT_API void PluginSetKeyZeroColor(int animationId, int frameId, int rzkey, int color)
	{
		return;
	}

	EXPORT_API void PluginSetKeyZeroColorName(const char* path, int frameId, int rzkey, int color)
	{
		return;
	}

	EXPORT_API double PluginSetKeyZeroColorNameD(const char* path, double frameId, double rzkey, double color)
	{
		
		return 0;
	}


	EXPORT_API void PluginSetKeysNonZeroColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color)
	{
		return;
	}

	EXPORT_API void PluginSetKeysNonZeroColorName(const char* path, int frameId, const int* rzkeys, int keyCount, int color)
	{
		return;
	}


	EXPORT_API void PluginSetKeysZeroColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color)
	{
		return;
	}

	EXPORT_API void PluginSetKeysZeroColorName(const char* path, int frameId, const int* rzkeys, int keyCount, int color)
	{
		return;
	}


	EXPORT_API void PluginSetKeysNonZeroColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color)
	{
		return;
	}

	EXPORT_API void PluginSetKeysNonZeroColorAllFramesName(const char* path, const int* rzkeys, int keyCount, int color)
	{
		return;
	}


	EXPORT_API void PluginSetKeysZeroColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color)
	{
		return;
	}

	EXPORT_API void PluginSetKeysZeroColorAllFramesName(const char* path, const int* rzkeys, int keyCount, int color)
	{
		return;
	}


	EXPORT_API void PluginSet1DColor(int animationId, int frameId, int led, int color)
	{
		return;
	}

	EXPORT_API void PluginSet1DColorName(const char* path, int frameId, int index, int color)
	{
		return;
	}

	EXPORT_API double PluginSet1DColorNameD(const char* path, double frameId, double index, double color)
	{
		return 0;
	}

	EXPORT_API void PluginSet2DColor(int animationId, int frameId, int row, int column, int color)
	{
		return;
	}

	EXPORT_API void PluginSet2DColorName(const char* path, int frameId, int row, int column, int color)
	{
		return;
	}

	// GMS only allows 4 params when string datatype is used
	EXPORT_API double PluginSet2DColorNameD(const char* path, double frameId, double rowColumnIndex, double color)
	{
		
		return 0;
	}

	EXPORT_API void PluginCopyKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey)
	{
		return;
	}

	EXPORT_API void PluginCopyKeyColorName(const char* sourceAnimation, const char* targetAnimation, int frameId, int rzkey)
	{
		return;
	}

	EXPORT_API double PluginCopyKeyColorNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double rzkey)
	{
		
		return 0;
	}


	EXPORT_API void PluginCopyNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		return;
	}

	EXPORT_API void PluginCopyNonZeroAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		return;
	}

	EXPORT_API double PluginCopyNonZeroAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		
		return 0;
	}


	EXPORT_API void PluginCopyNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		return;
	}

	EXPORT_API void PluginCopyNonZeroAllKeysAllFramesOffsetName(const char* sourceAnimation, const char* targetAnimation, int offset)
	{
		return;
	}

	EXPORT_API double PluginCopyNonZeroAllKeysAllFramesOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double offset)
	{
		
		return 0;
	}


	EXPORT_API void PluginCopyZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		return;
	}

	EXPORT_API void PluginCopyZeroAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		return;
	}

	EXPORT_API double PluginCopyZeroAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		
		return 0;
	}


	EXPORT_API void PluginCopyZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		return;
	}

	EXPORT_API void PluginCopyZeroAllKeysAllFramesOffsetName(const char* sourceAnimation, const char* targetAnimation, int offset)
	{
		return;
	}

	EXPORT_API double PluginCopyZeroAllKeysAllFramesOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double offset)
	{
		
		return 0;
	}


	EXPORT_API void PluginCopyNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		return;
	}

	EXPORT_API void PluginCopyNonZeroTargetAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		return;
	}

	EXPORT_API double PluginCopyNonZeroTargetAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		
		return 0;
	}


	EXPORT_API void PluginCopyZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		return;
	}

	EXPORT_API void PluginCopyZeroTargetAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		return;
	}

	EXPORT_API double PluginCopyZeroTargetAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		
		return 0;
	}


	EXPORT_API void PluginCopyNonZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey)
	{
		return;
	}

	EXPORT_API void PluginCopyNonZeroKeyColorName(const char* sourceAnimation, const char* targetAnimation, int frameId, int rzkey)
	{
		return;
	}

	EXPORT_API double PluginCopyNonZeroKeyColorNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double rzkey)
	{
		
		return 0;
	}


	EXPORT_API void PluginCopyZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey)
	{
		return;
	}

	EXPORT_API void PluginCopyZeroKeyColorName(const char* sourceAnimation, const char* targetAnimation, int frameId, int rzkey)
	{
		return;
	}

	EXPORT_API double PluginCopyZeroKeyColorNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double rzkey)
	{
		
		return 0;
	}


	EXPORT_API void PluginFillColor(int animationId, int frameId, int color)
	{
		return;
	}

	EXPORT_API void PluginFillColorName(const char* path, int frameId, int color)
	{
		return;
	}

	EXPORT_API double PluginFillColorNameD(const char* path, double frameId, double color)
	{
		
		return 0;
	}


	EXPORT_API void PluginFillColorRGB(int animationId, int frameId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API void PluginFillColorRGBName(const char* path, int frameId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginFillColorRGBNameD(const char* path, double frameId, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginFillColorAllFrames(int animationId, int color)
	{
		return;
	}

	EXPORT_API void PluginFillColorAllFramesName(const char* path, int color)
	{
		return;
	}

	EXPORT_API double PluginFillColorAllFramesNameD(const char* path, double color)
	{
		
		return 0;
	}


	EXPORT_API void PluginFillColorAllFramesRGB(int animationId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API void PluginFillColorAllFramesRGBName(const char* path, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginFillColorAllFramesRGBNameD(const char* path, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginFillNonZeroColor(int animationId, int frameId, int color)
	{
		return;
	}

	EXPORT_API void PluginFillNonZeroColorName(const char* path, int frameId, int color)
	{
		return;
	}

	EXPORT_API double PluginFillNonZeroColorNameD(const char* path, double frameId, double color)
	{
	
		return 0;
	}


	EXPORT_API void PluginFillNonZeroColorRGB(int animationId, int frameId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API void PluginFillNonZeroColorRGBName(const char* path, int frameId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginFillNonZeroColorRGBNameD(const char* path, double frameId, double red, double green, double blue)
	{
	
		return 0;
	}


	EXPORT_API void PluginFillZeroColor(int animationId, int frameId, int color)
	{
		return;
	}

	EXPORT_API void PluginFillZeroColorName(const char* path, int frameId, int color)
	{
		return;
	}

	EXPORT_API double PluginFillZeroColorNameD(const char* path, double frameId, double color)
	{
		
		return 0;
	}


	EXPORT_API void PluginFillZeroColorRGB(int animationId, int frameId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API void PluginFillZeroColorRGBName(const char* path, int frameId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginFillZeroColorRGBNameD(const char* path, double frameId, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginFillNonZeroColorAllFrames(int animationId, int color)
	{
		return;
	}

	EXPORT_API void PluginFillNonZeroColorAllFramesName(const char* path, int color)
	{
		return;
	}

	EXPORT_API double PluginFillNonZeroColorAllFramesNameD(const char* path, double color)
	{
		
		return 0;
	}


	EXPORT_API void PluginFillNonZeroColorAllFramesRGB(int animationId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API void PluginFillNonZeroColorAllFramesRGBName(const char* path, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginFillNonZeroColorAllFramesRGBNameD(const char* path, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginFillZeroColorAllFrames(int animationId, int color)
	{
		return;
	}

	EXPORT_API void PluginFillZeroColorAllFramesName(const char* path, int color)
	{
		return;
	}

	EXPORT_API double PluginFillZeroColorAllFramesNameD(const char* path, double color)
	{
		return 0;
	}


	EXPORT_API void PluginFillZeroColorAllFramesRGB(int animationId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API void PluginFillZeroColorAllFramesRGBName(const char* path, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginFillZeroColorAllFramesRGBNameD(const char* path, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginFillRandomColorsBlackAndWhite(int animationId, int frameId)
	{
		return;
	}

	EXPORT_API void PluginFillRandomColorsBlackAndWhiteName(const char* path, int frameId)
	{
		return;
	}

	EXPORT_API double PluginFillRandomColorsBlackAndWhiteNameD(const char* path, double frameId)
	{
		return 0;
	}


	EXPORT_API void PluginOffsetColors(int animationId, int frameId, int offsetRed, int offsetGreen, int offsetBlue)
	{
		return;
	}

	EXPORT_API void PluginOffsetColorsName(const char* path, int frameId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginOffsetColorsNameD(const char* path, double frameId, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginOffsetColorsAllFrames(int animationId, int offsetRed, int offsetGreen, int offsetBlue)
	{
		return;
	}

	EXPORT_API void PluginOffsetColorsAllFramesName(const char* path, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginOffsetColorsAllFramesNameD(const char* path, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginOffsetNonZeroColors(int animationId, int frameId, int offsetRed, int offsetGreen, int offsetBlue)
	{
		return;
	}

	EXPORT_API void PluginOffsetNonZeroColorsName(const char* path, int frameId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginOffsetNonZeroColorsNameD(const char* path, double frameId, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginOffsetNonZeroColorsAllFrames(int animationId, int offsetRed, int offsetGreen, int offsetBlue)
	{
		return;
	}

	EXPORT_API void PluginOffsetNonZeroColorsAllFramesName(const char* path, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginOffsetNonZeroColorsAllFramesNameD(const char* path, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginMultiplyIntensity(int animationId, int frameId, float intensity)
	{
		return;
	}

	EXPORT_API void PluginMultiplyIntensityName(const char* path, int frameId, float intensity)
	{
		return;
	}

	EXPORT_API double PluginMultiplyIntensityNameD(const char* path, double frameId, double intensity)
	{
		
		return 0;
	}


	EXPORT_API void PluginMultiplyIntensityRGB(int animationId, int frameId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API void PluginMultiplyIntensityRGBName(const char* path, int frameId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginMultiplyIntensityRGBNameD(const char* path, double frameId, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginMultiplyIntensityAllFrames(int animationId, float intensity)
	{
		return;
	}

	EXPORT_API void PluginMultiplyIntensityAllFramesName(const char* path, float intensity)
	{
		return;
	}

	EXPORT_API double PluginMultiplyIntensityAllFramesNameD(const char* path, double intensity)
	{
		
		return 0;
	}


	EXPORT_API void PluginMultiplyIntensityAllFramesRGB(int animationId, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API void PluginMultiplyIntensityAllFramesRGBName(const char* path, int red, int green, int blue)
	{
		return;
	}

	EXPORT_API double PluginMultiplyIntensityAllFramesRGBNameD(const char* path, double red, double green, double blue)
	{
		
		return 0;
	}


	EXPORT_API void PluginReverseAllFrames(int animationId)
	{
		return;
	}

	EXPORT_API void PluginReverseAllFramesName(const char* path)
	{
		return;
	}

	EXPORT_API double PluginReverseAllFramesNameD(const char* path)
	{
		
		return 0;
	}


	EXPORT_API void PluginSetCurrentFrame(int animationId, int frameId)
	{
		return;
	}

	EXPORT_API void PluginSetCurrentFrameName(const char* path, int frameId)
	{
		return;
	}

	EXPORT_API double PluginSetCurrentFrameNameD(const char* path, double frameId)
	{
		
		return 0;
	}

	EXPORT_API void PluginPauseAnimation(int animationId)
	{
		return;
	}

	EXPORT_API void PluginPauseAnimationName(const char* path)
	{
		return;
	}

	EXPORT_API double PluginPauseAnimationNameD(const char* path)
	{
		
		return 0;
	}

	EXPORT_API bool PluginIsAnimationPaused(int animationId)
	{
		return true;
	}

	EXPORT_API bool PluginIsAnimationPausedName(const char* path)
	{
		return 1;
	}

	EXPORT_API double PluginIsAnimationPausedNameD(const char* path)
	{
		return 1;
	}

	EXPORT_API bool PluginHasAnimationLoop(int animationId)
	{
		return false;
	}

	EXPORT_API bool PluginHasAnimationLoopName(const char* path)
	{
		return true;
	}

	EXPORT_API double PluginHasAnimationLoopNameD(const char* path)
	{
		return 1;
	}

	EXPORT_API void PluginResumeAnimation(int animationId, bool loop)
	{
		return;
	}

	EXPORT_API void PluginResumeAnimationName(const char* path, bool loop)
	{
		return;
	}

	EXPORT_API double PluginResumeAnimationNameD(const char* path, double loop)
	{
		return 0;
	}


	EXPORT_API void PluginSetChromaCustomFlag(int animationId, bool flag)
	{
		return;
	}

	EXPORT_API void PluginSetChromaCustomFlagName(const char* path, bool flag)
	{
		return;
	}

	EXPORT_API double PluginSetChromaCustomFlagNameD(const char* path, double flag)
	{
		return 0;
	}


	EXPORT_API void PluginSetChromaCustomColorAllFrames(int animationId)
	{
		return;
	}

	EXPORT_API void PluginSetChromaCustomColorAllFramesName(const char* path)
	{
		return;
	}

	EXPORT_API double PluginSetChromaCustomColorAllFramesNameD(const char* path)
	{
		
		return 0;
	}


	EXPORT_API void PluginMakeBlankFrames(int animationId, int frameCount, float duration, int color)
	{
		return;
	}

	EXPORT_API void PluginMakeBlankFramesName(const char* path, int frameCount, float duration, int color)
	{
		return;
	}

	EXPORT_API double PluginMakeBlankFramesNameD(const char* path, double frameCount, double duration, double color)
	{
		return 0;
	}


	EXPORT_API void PluginMakeBlankFramesRandomBlackAndWhite(int animationId, int frameCount, float duration)
	{
		return;
	}

	EXPORT_API void PluginMakeBlankFramesRandomBlackAndWhiteName(const char* path, int frameCount, float duration)
	{
		return;
	}

	EXPORT_API double PluginMakeBlankFramesRandomBlackAndWhiteNameD(const char* path, double frameCount, double duration)
	{
	
		return 0;
	}


	EXPORT_API RZRESULT PluginCreateEffect(RZDEVICEID deviceId, EFFECT_TYPE effect, int* colors, int size, FChromaSDKGuid* effectId)
	{
		return NULL;
	}

	EXPORT_API RZRESULT PluginSetEffect(const FChromaSDKGuid& effectId)
	{
		return NULL;
	}

	EXPORT_API RZRESULT PluginDeleteEffect(const FChromaSDKGuid& effectId)
	{
		return NULL;
	}
}
