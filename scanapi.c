
#include "scanapi.h"
#include "scanner.h"

    
int NewScanner(HANDLE *h)
{
    Scanner* scanner = new Scanner();
    *h = (HANDLE)scanner;
    return 0;
}

int Open(HANDLE h)
{
    Scanner* scanner = static_cast<Scanner*>(h);
    return scanner->Open();
}

int Scan(HANDLE h)
{
    Scanner* scanner = static_cast<Scanner*>(h);
    return scanner->Scan();
}

int Close(HANDLE h)
{
    Scanner* scanner = static_cast<Scanner*>(h);
    return scanner->Close();
}

int DeleteScanner(HANDLE h)
{
    Scanner* scanner = static_cast<Scanner*>(h);
    delete scanner;
    return 0;
}
