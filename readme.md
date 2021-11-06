# How to create a new project

* Make sure you have a CMakeLists.txt
* Make sure you have installed cmake on your local workstation.

## Install CMake environment
```bash
cmake build .
```

## Build project
```bash
cmake --build .
```

## Run application
```bash
./Tutorial 25
```

## Config variable environment
```bash
cmake . -D[Variable Name]=[Value]
example: cmake . -DUSE_MYMATH=ON
```

## Install binary file to local

```bash
cmake --install . --prefix "/home/myuser/installdir"
```

## Run test case
```bash
ctest -C Debug -VV
```