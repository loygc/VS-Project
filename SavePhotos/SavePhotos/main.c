#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>



int main()
{
	int count = 0;
	printf("自动下图程序开始运行");
	for (int i = 10; i > 1; i--)
	{
		Sleep(1000);
		printf("\n还有%d秒就要开始下图了", i);
	}
	while (1)
	{
		mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
		Sleep(500);
		keybd_event('VK_T', 0, 0, 0);
		keybd_event('VK_T', 0, 2, 0);
		Sleep(500);

		keybd_event(VK_CONTROL, 0, 0, 0);
		keybd_event(VK_TAB, 0, 0, 0);
		keybd_event(VK_CONTROL, 0, 2, 0);
		keybd_event(VK_TAB, 0, 2, 0);
		Sleep(500);
		keybd_event(VK_CONTROL, 0, 0, 0);
		keybd_event('VK_S', 0, 0, 0);
		keybd_event(VK_CONTROL, 0, 2, 0);
		keybd_event('VK_S', 0, 2, 0);
		Sleep(100);
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, 2, 0);
		Sleep(300);
		keybd_event(VK_CONTROL, 0, 0, 0);
		keybd_event(VK_F4, 0, 0, 0);
		keybd_event(VK_CONTROL, 0, 2, 0);
		keybd_event(VK_F4, 0, 2, 0);
		Sleep(200);
		keybd_event(VK_RIGHT, 0, 0, 0);
		keybd_event(VK_RIGHT, 0, 2, 0);
		Sleep(1000);
		count++;
		printf("你下了%d张图片\n", count);
		
		if (count == 8)
		{
			Sleep(1000);
			Sleep(1000);
			break;
		}
	}
	system("pause");
	return 0;
}