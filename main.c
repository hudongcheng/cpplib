
#include "scanapi.h"

/*
typedef void * HANDLE;

extern "C" int NewScanner(HANDLE *h);
extern "C" int Open(HANDLE h);
extern "C" int Scan(HANDLE h);
extern "C" int Close(HANDLE h);
extern "C" int DeleteScanner(HANDLE h);
*/

int main()
{
    HANDLE h = 0;
    NewScanner(&h);
    Open(h);
    Scan(h);
    Close(h);
    return 0;
}
