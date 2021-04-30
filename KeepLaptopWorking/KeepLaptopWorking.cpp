#include "stdafx.h"
#include <Windows.h>

int main()
{
	for (;;)
	{
		auto result = SetThreadExecutionState(ES_SYSTEM_REQUIRED | ES_DISPLAY_REQUIRED | ES_CONTINUOUS);
		Sleep(30'000);
	}
}
