# Memfault Build ID Scons example

Small example showing how to set a Memfault Build ID using scons `AddPostAction`.

```bash
# if not already done, install scons and mflt_build_id dep:
❯ pip install scons pyelftools

# clone this repo
❯ git clone --recursive https://github.com/noahp/memfault-build-id-scons

# build (requires some gcc/cc scons can find)
❯ scons
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
gcc -o hello.o -c -Ithird-party/memfault-firmware-sdk/components/include -I. hello.c
gcc -o hello hello.o
/home/noah/.virtualenvs/default/bin/python third-party/memfault-firmware-sdk/scripts/fw_build_id.py hello
WARNING: Located a GNU build id but it's not being used by the Memfault SDK
Added Memfault Generated Build ID to ELF: b964963665bba6c1b37d0d024db919cdc9e44817
Found Memfault Build Id: b964963665bba6c1b37d0d024db919cdc9e44817
scons: done building targets.
```
