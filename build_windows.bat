git pull
python pre_windows.py
mkdir build_windows
cd build_windows
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
cmake.exe -DCMAKE_BUILD_TYPE=Release -DCMAKE_DEPENDS_USE_COMPILER=FALSE -G "CodeBlocks - NMake Makefiles" ..
cd build_windows
nmake
