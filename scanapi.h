
#ifndef SCANAPI_H
#define SCANAPI_H

//#ifndef HANDLE
typedef void * HANDLE;
//#endif

//extern "C" {
  int NewScanner(HANDLE *h);

  int Open(HANDLE h);

  int Scan(HANDLE h);

  int Close(HANDLE h);

  int DeleteScanner(HANDLE h);
  //}


#endif