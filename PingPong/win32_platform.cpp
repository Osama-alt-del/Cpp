// This is the platform dependent code for the game:
// So first we are going to include the windows library:
// !! The problem is that I'm using a linux computer, and therefore don't have this header !!
#include <windows.h>

// So win32 is an API that allows devs to create applications for the Windows Operating System
// We can search the documentation for win32, by typing in winmain msdn (microsoft developer network)
// We are going to try and implement WinMain, which is entry point (where the program starts) for graphical windows-based applications
// Here is the function and it's parameters:

int __clrcall WinMain(
  [in]           HINSTANCE hInstance,
  [in, optional] HINSTANCE hPrevInstance,
  [in]           LPSTR     lpCmdLine,
  [in]           int       nShowCmd
){

}


