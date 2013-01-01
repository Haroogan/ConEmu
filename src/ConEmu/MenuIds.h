
#define ID_WHATS_NEW_FILE 0xABB0
#define ID_WHATS_NEW_WWW 0xABB1
#define ID_DUMP_MEM_BLK 0xABB2
#define ID_HOTKEYS 0xABB3
#define ID_MINIDUMP 0xABB4
#define ID_SCREENSHOT 0xABB5
#define ID_RESETCMDHISTORY 0xABB6
#define ID_CON_FIND 0xABB7
#define ID_LOADDUMPCONSOLE 0xABB8
#define ID_REPORTBUG 0xABB9
#define ID_HOMEPAGE 0xABBA
#define ID_CHECKUPDATE 0xABBB
#define ID_STOPUPDATE 0xABBC
#define ID_TOMONITOR 0xABBD
#define ID_NEWCONSOLE 0xABBE
#define ID_DEBUG_TRAP 0xABBF
#define ID_DEBUG_SHOWRECTS 0xABC0
//#define ID_MONITOR_SHELLACTIVITY 0xABC1
#define ID_CON_COPY 0xABC2
#define ID_CON_MARKTEXT 0xABC3
#define ID_CON_MARKBLOCK 0xABC4
#define ID_ALWAYSONTOP 0xABC5
#define ID_DEBUGGUI 0xABC6
#define ID_HELP 0xABC7
#define ID_CON_TOGGLE_VISIBLE 0xABC8
#define ID_CON_PASTE 0xABC9

#ifdef SHOW_AUTOSCROLL
#define ID_AUTOSCROLL 0xABCA
#endif

#define ID_DUMPCONSOLE 0xABCB
#define ID_CONPROP 0xABCC
#define ID_SETTINGS 0xABCD
#define ID_ABOUT 0xABCE
#define ID_TOTRAY 0xABCF
#define ID_DEBUGCON 0xABD0
// VCon menu items
#define IDM_VCONCMD_FIRST 0xABD1
#define IDM_CLOSE IDM_VCONCMD_FIRST
#define IDM_RESTART 0xABD2
#define IDM_RESTARTAS 0xABD3
#define IDM_TERMINATEPRC 0xABD4 // Terminate -> Active process
#define IDM_TERMINATECON 0xABD5 // Terminate -> Close (console)
#define IDM_ADMIN_DUPLICATE 0xABD6
#define IDM_SAVE 0xABD7
#define IDM_SAVEALL 0xABD8
#define IDM_DETACH 0xABD9
#define IDM_ATTACHTO 0xABDA
#define IDM_RENAMETAB 0xABDB
#define IDM_DUPLICATE 0xABDC
#define IDM_TERMINATEGROUP 0xABDD // Terminate -> Close (group)
#define IDM_RESTARTDLG 0xABDE
#define IDM_VCONCMD_LAST IDM_RESTARTDLG
// Consoles // DWORD MAKELONG(WORD wLow,WORD wHigh);
#define IDM_VCON_FIRST MAKELONG(1,1)
#define IDM_VCON_LAST  MAKELONG(0,MAX_CONSOLE_COUNT+1)
