#include "systemclass.h"


static int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ PSTR pScmdline, _In_ int iCmdshow)
{
	SystemClass* System;
	bool result;
	
	
	System = new SystemClass;

	result = System->Initialize();
	if(result)
	{
		System->Run();
	}

	System->Shutdown();
	delete System;
	System = 0;

	return 0;
}