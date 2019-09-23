// RawPluginCPlusPlusCode.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "RawPluginCPlusPlusCode.h"


// This is an example of an exported function.
RAWPLUGINCPLUSPLUSCODE_API int AddTwo(int x, int y)
{
	return x + y;
}