@SET PATH=C:/Program Files/ANSYS Inc/v192/SCADE/SCADE/../contrib/Msys64/mingw64/bin;%PATH%
@SET INCLUDE=C:/Program Files/ANSYS Inc/v192/SCADE/SCADE/../contrib/Msys64/mingw64/include
@SET LIB=C:/Program Files/ANSYS Inc/v192/SCADE/SCADE/../contrib/Msys64/mingw64/lib
@IF "-B"=="%1" SET ARG=%1
gcc -print-search-dirs
@"C:/Program Files/ANSYS Inc/v192/SCADE/SCADE/../contrib/Msys64/mingw64/bin/mingw32-make.exe" -j 4 -f Makefile_win64 %ARG%
