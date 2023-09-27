/* hello.c */
#include <stdio.h>
#include <inttypes.h>

#include <stdint.h>

#include "third-party/memfault-firmware-sdk/components/core/src/memfault_build_id.c"

int main(int argc, char* argv[])
{
  printf("Hello world\n");
  printf("memfault build id ");
  for (int i = 0; i < MEMFAULT_BUILD_ID_LEN; i++) {
    printf("%02x", g_memfault_sdk_derived_build_id[i]);
  }
  printf("\n");
  return 0;
}
