#include "stdafx.h"
#include <windows.h>

void go()
{
	int *p = (int *)0x211E0A18;
	*p = 500;
}