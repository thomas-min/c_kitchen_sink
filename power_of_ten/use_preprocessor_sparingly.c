#include <stdio.h>

int main()
{
// Check for a 64-bit architecture
#if defined(__x86_64__) || defined(_M_X64)
  printf("Compiled for 64-bit architecture (x86_64 or equivalent).\n");
#elif defined(__i386__) || defined(_M_IX86)
  printf("Compiled for 32-bit x86 architecture.\n");
#elif defined(__arm__)
  printf("Compiled for ARM architecture.\n");
#elif defined(__aarch64__)
  printf("Compiled for ARM64 architecture.\n");
#elif defined(_MIPS_ARCH)
  printf("Compiled for MIPS architecture.\n");
#elif defined(__powerpc__) || defined(__ppc__) || defined(_M_PPC)
  printf("Compiled for PowerPC architecture.\n");
// You can continue checking for other architectures as needed.
#else
  printf("Unknown architecture.\n");
#endif

  return 0;
}
