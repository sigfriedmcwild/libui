// 21 april 2016

// TODO document
_UI_EXTERN void uiWindowsRegisterWM_COMMANDHandler(HWND hwnd, BOOL (*handler)(uiControl *, HWND, WORD, LRESULT *), uiControl *c);
_UI_EXTERN void uiWindowsUnregisterWM_COMMANDHandler(HWND hwnd);

// TODO document
_UI_EXTERN void uiWindowsRegisterWM_NOTIFYHandler(HWND hwnd, BOOL (*handler)(uiControl *, HWND, NMHDR *, LRESULT *), uiControl *c);
_UI_EXTERN void uiWindowsUnregisterWM_NOTIFYHandler(HWND hwnd);

// TODO document
_UI_EXTERN void uiWindowsRegisterWM_HSCROLLHandler(HWND hwnd, BOOL (*handler)(uiControl *, HWND, WORD, LRESULT *), uiControl *c);
_UI_EXTERN void uiWindowsUnregisterWM_HSCROLLHandler(HWND hwnd);

// TODO document
_UI_EXTERN void uiWindowsRegisterReceiveWM_WININICHANGE(HWND hwnd);
_UI_EXTERN void uiWindowsUnregisterReceiveWM_WININICHANGE(HWND hwnd);
