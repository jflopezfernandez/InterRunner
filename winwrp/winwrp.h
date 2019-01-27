
#pragma once

#define DLL_EXPORT

#ifdef DLL_EXPORT
#define LIBAPI __declspec(dllexport)
#else
#define LIBAPI __declspec(dllimport)
#endif

extern "C" LIBAPI HANDLE WINAPI CreateNewFile(LPCWSTR FileName);
