import sys

env = Environment(
    CPPPATH=["third-party/memfault-firmware-sdk/components/include/", "."]
)
hello = env.Program(["hello.c"])

env.AddPostAction(
    hello,
    f"{sys.executable} third-party/memfault-firmware-sdk/scripts/fw_build_id.py $TARGET",
)
