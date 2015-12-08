# C 调用 C++ 库

下面的命令编译并链接生成`scan`：
```shell
g++ -c scanner.cpp scanapi.c
gcc -c main.c
gcc main.o scanner.o scanapi.o -lstdc++ -o scan
```

静态库：
```shell
g++ -c  scanner.cpp scanapi.c
ar -r libscanner.a scanapi.o scanner.o
gcc -c main.c
gcc main.o libscanner.a -o scan -lstdc++
```

动态库：
```shell
gcc -c scanner.cpp scanapi.c
gcc -shared scanner.o scanapi.o -o libscanner.so -lstdc++
gcc main.o libscanner.so -o scan
```

查看导出函数：
```
$ nm libscanner.so
0000000000000ec0 T _Close
0000000000000ef0 T _DeleteScanner
0000000000000e20 T _NewScanner
0000000000000e60 T _Open
0000000000000e90 T _Scan
0000000000000d90 T __ZN7Scanner4OpenEv
0000000000000dc0 T __ZN7Scanner4ScanEv
0000000000000df0 T __ZN7Scanner5CloseEv
                 U __ZdlPv
                 U __Znwm
                 U _printf
                 U dyld_stub_binder
```