
##window build frida.dll (msvc MT)

1.install llvm C:\\Program Files\\LLVM\\

2.install frida-core library

    1.goto https://github.com/frida/frida/releases download frida-gum-devkit-*-windows-x86_64.tar.xz

    2.decompression to frida_shared dir

3.run builddef.py (Automatically create frida.def)

4.cmake build (Automatically frida_shared.dll)