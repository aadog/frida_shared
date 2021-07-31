git pull
python3 pre_linux.py
mkdir build_linux
cd build_linux
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_DEPENDS_USE_COMPILER=FALSE -G "CodeBlocks - Unix Makefiles" ..
cd build_linux
make all
