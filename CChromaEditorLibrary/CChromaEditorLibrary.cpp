// CChromaEditorLibrary.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "CChromaEditorLibrary.h"
#include "ColorButton.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#define TEMP_FILE "temp.chroma"
#define ANIMATION_VERSION 1
#define ID_DYNAMIC_BUTTON_MIN	2000
#define ID_DYNAMIC_COLOR_MIN	2200
#define ID_DYNAMIC_BUTTON_MAX	2256
#define	IDT_TIMER_0				2257

#define DEFAULT_OVERRIDE_TIME 0.1f
#define DEFAULT_DURATION 1.0f
#define DEVICE_TYPE_1D "1D"
#define DEVICE_TYPE_2D "2D"
#define DEVICE_CHROMA_LINK "ChromaLink"
#define DEVICE_HEADSET "Headset"
#define DEVICE_KEYBOARD "Keyboard"
#define DEVICE_KEYPAD "Keypad"
#define DEVICE_MOUSE "Mouse"
#define DEVICE_MOUSEPAD "Mousepad"

using namespace std;

//
//TODO: If this DLL is dynamically linked against the MFC DLLs,
//		any functions exported from this DLL which call into
//		MFC must have the AFX_MANAGE_STATE macro added at the
//		very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

// CCChromaEditorLibraryApp

BEGIN_MESSAGE_MAP(CCChromaEditorLibraryApp, CWinApp)
END_MESSAGE_MAP()


// CCChromaEditorLibraryApp construction

CCChromaEditorLibraryApp::CCChromaEditorLibraryApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CCChromaEditorLibraryApp object

CCChromaEditorLibraryApp theApp;


// CCChromaEditorLibraryApp initialization

BOOL CCChromaEditorLibraryApp::InitInstance()
{
	return TRUE;
}

CMainViewDlg::CMainViewDlg() : CDialogEx(IDD_MAIN_VIEW)
{
	return;
}

CMainViewDlg::~CMainViewDlg()
{
	return;
}

void CMainViewDlg::OpenOrCreateAnimation(const std::string& path)
{
	return;
}

void CMainViewDlg::PlayAnimationOnOpen()
{
	return;
}

void CMainViewDlg::LoadFile()
{
	return;
}

void CMainViewDlg::SaveFile()
{
	return;
}

CEdit* CMainViewDlg::GetControlOverrideTime()
{
	return NULL;
}

CStatic* CMainViewDlg::GetControlGridSize()
{
	return NULL;
}

CStatic* CMainViewDlg::GetControlSetKeyLabel()
{
	return NULL;
}

CComboBox* CMainViewDlg::GetControlSetKeyCombo()
{
	return NULL;
}

CButton* CMainViewDlg::GetControlSetKeyButton()
{
	return NULL;
}

CStatic* CMainViewDlg::GetControlSetLEDLabel()
{
	return NULL;
}

CComboBox* CMainViewDlg::GetControlSetLEDCombo()
{
	return NULL;
}

CButton* CMainViewDlg::GetControlSetLEDButton()
{
	return NULL;
}

CStatic* CMainViewDlg::GetControlFrames()
{
	return NULL;
}

CEdit* CMainViewDlg::GetControlFrameIndex()
{
	return NULL;
}

CEdit* CMainViewDlg::GetControlDuration()
{
	return NULL;
}

CSliderCtrl* CMainViewDlg::GetBrushSlider()
{
	return NULL;
}

CEdit* CMainViewDlg::GetControlEditBrush()
{
	return NULL;
}

CEdit* CMainViewDlg::GetControlEditDelete()
{
	return NULL;
}

void CMainViewDlg::UpdateOverrideTime(float time)
{
	return;
}

float CMainViewDlg::GetOverrideTime()
{
	return 0;
}

void CMainViewDlg::UpdateDuration(float time)
{
	return;
}

float CMainViewDlg::GetDuration()
{
	return 0;
}

void CMainViewDlg::RefreshDevice()
{
	return;
}

void CMainViewDlg::RecreateGrid()
{
	return;
}

void CMainViewDlg::RefreshGrid()
{
	return;
}

void CMainViewDlg::RefreshFrames()
{
	return;
}

CStatic* CMainViewDlg::GetControlVersion()
{
	return NULL;
}

CListBox* CMainViewDlg::GetControlListTypes()
{
	return NULL;
}

void CMainViewDlg::UpdateWindowTitle()
{
	return;
}

void CMainViewDlg::SetPath(const string& path)
{
	return;
}

BOOL CMainViewDlg::OnInitDialog()
{

	return TRUE;
}

void CMainViewDlg::OnTextChangeFrameIndex()
{
	return;
}

void CMainViewDlg::OnTextChangeBrush()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonNthDelete()
{
	return;
}

BOOL CMainViewDlg::PreTranslateMessage(MSG* pMsg)
{
	return FALSE;
}

void CMainViewDlg::DoDataExchange(CDataExchange* pDX)
{
	return;
}

BEGIN_MESSAGE_MAP(CMainViewDlg, CDialogEx)

	ON_BN_CLICKED(IDC_BUTTON_SAVE, &CMainViewDlg::OnBnClickedMenuSave)
	ON_BN_CLICKED(IDC_BUTTON_EXIT, &CMainViewDlg::OnBnClickedMenuExit)
	ON_LBN_SELCHANGE(IDC_LIST_TYPES, &CMainViewDlg::OnSelChangeListTypes)
	ON_BN_CLICKED(IDC_BUTTON_IMPORT_OVERRIDE_TIME, &CMainViewDlg::OnBnClickedButtonImportOverrideTime)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR, &CMainViewDlg::OnBnClickedButtonClear)
	ON_BN_CLICKED(IDC_BUTTON_FILL, &CMainViewDlg::OnBnClickedButtonFill)
	ON_BN_CLICKED(IDC_BUTTON_FILL_BLANK, &CMainViewDlg::OnBnClickedButtonFillBlank)
	ON_BN_CLICKED(IDC_BUTTON_DARKEN, &CMainViewDlg::OnBnClickedButtonDarken)
	ON_BN_CLICKED(IDC_BUTTON_LIGHTEN, &CMainViewDlg::OnBnClickedButtonLighten)
	ON_BN_CLICKED(IDC_BUTTON_RANDOM, &CMainViewDlg::OnBnClickedButtonRandom)
	ON_BN_CLICKED(IDC_BUTTON_COPY, &CMainViewDlg::OnBnClickedButtonCopy)
	ON_BN_CLICKED(IDC_BUTTON_PASTE, &CMainViewDlg::OnBnClickedButtonPaste)
	ON_BN_CLICKED(IDC_BUTTON_PREVIEW, &CMainViewDlg::OnBnClickedButtonPreview)
	ON_BN_CLICKED(IDC_BUTTON_PLAY, &CMainViewDlg::OnBnClickedButtonPlay)
	ON_BN_CLICKED(IDC_BUTTON_LOOP, &CMainViewDlg::OnBnClickedButtonLoop)
	ON_BN_CLICKED(IDC_BUTTON_STOP, &CMainViewDlg::OnBnClickedButtonStop)
	ON_BN_CLICKED(IDC_BUTTON_LOAD, &CMainViewDlg::OnBnClickedButtonLoad)
	ON_BN_CLICKED(IDC_BUTTON_UNLOAD, &CMainViewDlg::OnBnClickedButtonUnload)
	ON_BN_CLICKED(IDC_BUTTON_SET_KEY, &CMainViewDlg::OnBnClickedButtonSetKey)
	ON_BN_CLICKED(IDC_BUTTON_SET_LED, &CMainViewDlg::OnBnClickedButtonSetLed)
	ON_BN_CLICKED(IDC_BUTTON_FIRST, &CMainViewDlg::OnBnClickedButtonFirst)
	ON_BN_CLICKED(IDC_BUTTON_LAST, &CMainViewDlg::OnBnClickedButtonLast)
	ON_BN_CLICKED(IDC_BUTTON_PREVIOUS, &CMainViewDlg::OnBnClickedButtonPrevious)
	ON_BN_CLICKED(IDC_BUTTON_NEXT, &CMainViewDlg::OnBnClickedButtonNext)
	ON_BN_CLICKED(IDC_BUTTON_INSERT, &CMainViewDlg::OnBnClickedButtonInsert)
	ON_BN_CLICKED(IDC_BUTTON_ADD, &CMainViewDlg::OnBnClickedButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_DUPLICATE, &CMainViewDlg::OnBnClickedButtonDuplicate)
	ON_BN_CLICKED(IDC_BUTTON_DELETE, &CMainViewDlg::OnBnClickedButtonDelete)
	ON_BN_CLICKED(IDC_BUTTON_RESET, &CMainViewDlg::OnBnClickedButtonReset)
	ON_COMMAND_RANGE(ID_DYNAMIC_BUTTON_MIN, ID_DYNAMIC_BUTTON_MAX, &CMainViewDlg::OnBnClickedButtonColor)
	ON_BN_CLICKED(IDC_BUTTON_SET_DURATION, &CMainViewDlg::OnBnClickedButtonSetDuration)
	ON_WM_HSCROLL()
	ON_EN_CHANGE(IDC_EDIT_FRAME_INDEX, &CMainViewDlg::OnTextChangeFrameIndex)
	ON_EN_CHANGE(IDC_EDIT_BRUSH, &CMainViewDlg::OnTextChangeBrush)
	ON_BN_CLICKED(IDC_BUTTON_NTH_DELETE, &CMainViewDlg::OnBnClickedButtonNthDelete)
	ON_BN_CLICKED(ID_MENU_NEW, &CMainViewDlg::OnBnClickedMenuNew)
	ON_BN_CLICKED(ID_MENU_OPEN, &CMainViewDlg::OnBnClickedMenuOpen)
	ON_BN_CLICKED(ID_MENU_SAVE, &CMainViewDlg::OnBnClickedMenuSave)
	ON_BN_CLICKED(ID_MENU_SAVE_AS, &CMainViewDlg::OnBnClickedMenuSaveAs)
	ON_BN_CLICKED(ID_MENU_EXIT, &CMainViewDlg::OnBnClickedMenuExit)
	ON_BN_CLICKED(ID_MENU_IMPORT_IMAGE, &CMainViewDlg::OnBnClickedMenuImportImage)
	ON_BN_CLICKED(ID_MENU_IMPORT_ANIMATION, &CMainViewDlg::OnBnClickedMenuImportAnimation)
	ON_WM_TIMER()
END_MESSAGE_MAP()

void CMainViewDlg::OnBnClickedMenuNew()
{
	return;
}

void CMainViewDlg::OnBnClickedMenuOpen()
{
	return;
}

void CMainViewDlg::OnBnClickedMenuSave()
{
	return;
}

void CMainViewDlg::OnBnClickedMenuSaveAs()
{
	return;
}

void CMainViewDlg::OnBnClickedMenuExit()
{
	return;
}

void CMainViewDlg::OnBnClickedMenuImportImage()
{
	return;
}


void CMainViewDlg::OnBnClickedMenuImportAnimation()
{
	return;
}


COLORREF CMainViewDlg::GetColor()
{
	// temp copy
	COLORREF color = _mColor;
	int red = (color & 0xFF);
	int green = (color & 0xFF00) >> 8;
	int blue = (color & 0xFF0000) >> 16;

	color = (red & 0xFF) | ((green & 0xFF) << 8) | ((blue & 0xFF) << 16);
	return color;
}

void CMainViewDlg::SetColor(COLORREF color)
{
	return;
}

void CMainViewDlg::OnOK()
{
	// stop enter from closing the dialog
}

void CMainViewDlg::OnCancel()
{
	// stop escape from closing the dialog
}

void CMainViewDlg::OnTimer(UINT_PTR TimerVal)
{
	return;
}

void CMainViewDlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	return;
}

void CMainViewDlg::OnSliderBrushIntensity()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonColor(UINT nID)
{
	return;
}

void CMainViewDlg::OnSelChangeListTypes()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonImportOverrideTime()
{
	return;
}

int CMainViewDlg::GetCurrentFrame()
{
	return 0;
}

void CMainViewDlg::SetCurrentFrame(unsigned int index)
{
	return;
}

int CMainViewDlg::GetFrameCount()
{
	return 0;
}

void CMainViewDlg::OnBnClickedButtonClear()
{
	return;
}


void CMainViewDlg::OnBnClickedButtonFill()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonFillBlank()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonDarken()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonLighten()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonRandom()
{
	return;
}


void CMainViewDlg::OnBnClickedButtonCopy()
{
	return;
}


void CMainViewDlg::OnBnClickedButtonPaste()
{
	return;
}


void CMainViewDlg::OnBnClickedButtonPreview()
{
	return;
}

EditorAnimationBase* CMainViewDlg::GetEditor()
{
	
	return nullptr;
	
}

AnimationBase* CMainViewDlg::GetAnimation()
{
	
	return nullptr;
	
}

void CMainViewDlg::OnBnClickedButtonPlay()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonLoop()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonStop()
{
	return;
}


void CMainViewDlg::OnBnClickedButtonLoad()
{
	return;
}


void CMainViewDlg::OnBnClickedButtonUnload()
{
	return;
}


void CMainViewDlg::OnBnClickedButtonSetKey()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonSetLed()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonFirst()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonLast()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonPrevious()
{
	return;
}


void CMainViewDlg::OnBnClickedButtonNext()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonInsert()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonAdd()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonDuplicate()
{
	return;
}

void CMainViewDlg::OnBnClickedButtonDelete()
{
	return;
}


void CMainViewDlg::OnBnClickedButtonReset()
{
	return;
}


void CMainViewDlg::OnBnClickedButtonSetDuration()
{
	return;
}
