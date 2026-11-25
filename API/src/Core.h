#pragma once

#ifdef _WIN32

#ifdef GC_EXPORT
#define GCAPI __declspec(dllexport)
#else 
#define GCAPI __declspec(dllimport)
#endif

#else 
#define GCAPI __attribute__((visibility("default")))
#endif