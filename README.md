# libfinvoice3-cpp

C++ library for generating Finvoice 3.0 invoices.

## Introduction

This library provides tools for generating electronic invoices in the Finvoice 3.0 standard. The output is XML data.

Finvoice is a fairly large standard. Currently the focus of this library is on features needed for typical B2B invoices between two Finnish companies and service (or consulting) products.

## Requirements

- C++ compiler supporting C++17
- qmake (comes with Qt)
- Make tool:
  - Linux/macOS: `make`
  - Windows (MinGW): `mingw32-make`
  - Windows (MSVC): `nmake`
- (optional) Qt Creator IDE


## Project structure

finvoice3-cpp/
│
├── lib/ # library source
│ ├── (source files)
│ └── lib.pro
│
├── test/ # test application
│ ├── main.cpp
│ ├── (other test files)
│ └── test.pro
│
└── finvoice3-cpp.pro # subdirs project file


## Building from source


On Linux command line:

```
qmake lib.pro
make
```

You may also add configuration flags:

```
qmake CONFIG+=release
```

or

```
qmake CONFIG+=debug
```

To clean the build, run

```
make clean
```



The output should be a static library file (.a), located in build/ directory.


In Qt Creator:

1. Open Qt Creator
2. Select File → Open File or Project
3. Open finvoice3-cpp.pro (the subdirs project)
4. Select the appropriate Kit
5. Click Build

Qt Creator will automatically build the library and then the test project.

## Using the library in another project

1. Copy the generated library file (.a or .lib) to your project.
2. Copy header files to your project.

Add these files to you project following the instruction of the build tool of your project.


## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

## License

This library is licensed under LGPL 2.1; see COPYING for more information.

