#include <stdio.h>

#include "cpu-features.h"

#if defined(BUILD_MONOLITHIC)
#define main  cpuf_ndk_compat_test_main
#endif

int main() {
  printf("android_getCpuFamily()=%d\n", android_getCpuFamily());
  printf("android_getCpuFeatures()=0x%08llx\n", android_getCpuFeatures());
  printf("android_getCpuCount()=%d\n", android_getCpuCount());
#ifdef __arm__
  printf("android_getCpuIdArm()=0x%04x\n", android_getCpuIdArm());
#endif  //__arm__
}
