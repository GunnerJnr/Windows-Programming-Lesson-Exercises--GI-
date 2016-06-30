// Include pre processor directives
#include <windows.h> // contain Win32 API functions & definitions that we need

// WinMain - returns an int to specify that the code is returned to the Windows OS
/*
	HINSTANCE hInstance - defines an application ID
	HINSTANCE hPrevInstance - Legacy 16-bit windows (no longer used in 32-bit)
	PSTR cmdLine - [PSTR - typedef for char*] cmdLine - string of cmd line args the user can pass into the application before it starts
	int showCmd - integert that specifies how the main window is initially shown (e.g minimised, maximised, normal?)
*/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR cmdLine, int showCmd)
{
	// returns and displays a message box to the screen
	MessageBox(
		0,						// handle (ID) to the owner window
		"First Win32 Program.",	// text in the message box
		"Window Title",			// message box title
		MB_OK					// message box style
		);

	/*
		MB_OK - instructs the message box to siplay an OK button
		MB_OKCANCEL - instructs the message box to display and OK and CANCEL button
		MB_YESNO - instructs the message box to display a YES and NO button
		MB_YESNOCANCEL - instructs the message box to display a YES, NO and CANCEL button

		NOTE:
		Finally, the message box’s return value depends on which button the user pressed; here is an abridged
		list of return values (see the Win32 documentation for more details):

		IDOK: The user pressed the OK button.
		IDCANCEL: The user pressed the CANCEL button.
		IDYES: The user pressed the YES button.
		IDNO: The user pressed the NO button.

		You can test which value was returned using an “if” statement and thus determine which button the user
		selected and then take appropriate action.

		NOTE:
		Many of the Win32 functions will have different style flags or values that enable you to customize
		various things. However, because there are so many different flags for the different API functions, we
		cannot cover all of them in this text. Therefore, it is important that you learn to use the Win32
		documentation to obtain further info on a Win32 function or type. The documentation is typically
		included in the help file of Visual C++. For example, in Visual C++ .NET, you would go to the
		Menu->Help->Index.
	*/
}