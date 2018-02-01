#include <windows.h>

int main()
{
	WinExec("notepad",SW_MAXIMIZE);
	keybd_event('W', 0, 0, 0);
	keybd_event('W', 0, 2, 0);
	Sleep(500);
	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);
	Sleep(500);
	keybd_event('A', 0, 0, 0);
	keybd_event('A', 0, 2, 0);
	Sleep(500);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	Sleep(500);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	Sleep(500);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	Sleep(500);
	keybd_event(VK_SPACE, 0, 0, 0);
	keybd_event(VK_SPACE, 0, 2, 0);
	Sleep(500);
	keybd_event('Z', 0, 0, 0);
	keybd_event('Z', 0, 2, 0);
	Sleep(500);
	keybd_event('H', 0, 0, 0);
	keybd_event('H', 0, 2, 0);
	Sleep(500);
	keybd_event('A', 0, 0, 0);
	keybd_event('A', 0, 2, 0);
	Sleep(500);
	keybd_event('O', 0, 0, 0);
	keybd_event('O', 0, 2, 0);
	Sleep(500);
	keybd_event('L', 0, 0, 0);
	keybd_event('L', 0, 2, 0);
	Sleep(500);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	Sleep(500);
	keybd_event('N', 0, 0, 0);
	keybd_event('N', 0, 2, 0);
	Sleep(500);
	keybd_event('G', 0, 0, 0);
	keybd_event('G', 0, 2, 0);
	Sleep(500);
	keybd_event('Z', 0, 0, 0);
	keybd_event('Z', 0, 2, 0);
	Sleep(500);
	keybd_event('H', 0, 0, 0);
	keybd_event('H', 0, 2, 0);
	Sleep(500);
	keybd_event('I', 0, 0, 0);
	keybd_event('I', 0, 2, 0);
	Sleep(500);
	keybd_event(VK_SPACE, 0, 0, 0);
	keybd_event(VK_SPACE, 0, 2, 0);

	return 0;
}