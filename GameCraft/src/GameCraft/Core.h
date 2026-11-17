#pragma once

#ifdef GC_PLATFORM_WINDOWS
	#ifdef GC_BUILD_DLL
		#define GAMECRAFT_API __declspec(dllexport)
	#else
		#define GAMECRAFT_API __declspec(dllimport)
	#endif
#else
	#error GameCraft only supports Windows
#endif