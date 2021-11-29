import os
import tarfile
import urllib.request
import frida_ver

root=os.getcwd()
def extract(tar_path, target_path):
    try:
        tar = tarfile.open(tar_path, "r:xz")
        file_names = tar.getnames()
        for file_name in file_names:
            tar.extract(file_name, target_path)
        tar.close()
    except Exception as e:
        raise Exception(e)
def delfile(path):
    try:
        os.remove(path)
    except:
        pass

os.chdir("./devkit/linux/")
print("frida {} devkit download...".format(frida_ver.ver))
urllib.request.urlretrieve("https://github.com/frida/frida/releases/download/{}/frida-core-devkit-{}-linux-x86_64.tar.xz".format(frida_ver.ver,frida_ver.ver),"./frida-core-devkit.tar.xz")
extract("./frida-core-devkit.tar.xz","./")
delfile("./frida-core-example.c")
delfile("./frida-core-devkit.tar.xz")

os.system("python3 ./build_linux_map.py")