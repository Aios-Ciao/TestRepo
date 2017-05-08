// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the BASEPROJ_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// BASEPROJ_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef BASEPROJ_EXPORTS
#define BASEPROJ_API __declspec(dllexport)
#else
#define BASEPROJ_API __declspec(dllimport)
#endif

// This class is exported from the BaseProj.dll
class BASEPROJ_API CBaseProj {
public:
	CBaseProj(void);
	// TODO: add your methods here.
};

extern BASEPROJ_API int nBaseProj;

BASEPROJ_API int fnBaseProj(void);
