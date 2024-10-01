# sciware_awful_cp
Example of a small package that won't work with the system `libstdc++` and to demonstrate
custom software installs. Not to be taken seriously.

## Building
```bash
make
```

To select intel compiler
```bash
make CXX=icpx
```

## Installing
```
make install
```

to install to a custom path
```
PREFIX=/path/to/my/prefix make install
```
