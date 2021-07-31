git pull
python3 pre_macos.py
mkdir build_macos
cd build_macos
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_DEPENDS_USE_COMPILER=FALSE -G "CodeBlocks - Unix Makefiles" ../
cd build_macos
make all
