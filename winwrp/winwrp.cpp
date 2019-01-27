
#include "stdafx.h"

extern "C"
LIBAPI HANDLE WINAPI CreateNewFile(LPCWSTR FileName)
{
    HANDLE NewFile = CreateFile(FileName, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);

    if (NewFile == INVALID_HANDLE_VALUE)
    {
        // TODO: Handle this error.
        return INVALID_HANDLE_VALUE;
    }

    return NewFile;
}
