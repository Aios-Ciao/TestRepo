// BaseProj.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "BaseProj.h"


// This is an example of an exported variable
BASEPROJ_API int nBaseProj=0;

// This is an example of an exported function.
BASEPROJ_API int fnBaseProj(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see BaseProj.h for the class definition
CBaseProj::CBaseProj()
{
	return;
}
