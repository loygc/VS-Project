#include <windows.h>
#include <stdio.h>

int main()
{
	HWND winqq = FindWindowA("TXGuiFoundation","QQ" );
	if (winqq == NULL)
	{
		printf("没有打开QQ");
	}
	else
	{
		while (1)
		{

			SetWindowPos(winqq, 0, 0, 0, 200, 200, 0);
			Sleep(1000);
			SetWindowPos(winqq, 0, 0, 0, 500, 500, 0);
			Sleep(1000);
		}
	}
	return 0;
}