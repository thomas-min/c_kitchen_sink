#include <stdlib.h>

int main()
{
  int *ptr = malloc(sizeof(int)); // Allocate memory for an integer

  if (ptr != NULL)
  {
    *ptr = 10; // Do something with the allocated memory
  }

  ptr = malloc(sizeof(int)); // Allocate memory again and overwrite the original pointer

  // At this point, there is no way to free the first block of memory allocated.
  // The pointer to it has been overwritten, causing a memory leak.

  // The second allocation should also be freed before the program terminates.
  free(ptr);

  // Normally, we should have freed the original allocation before reassigning ptr
  // free(ptr); <-- This is what should have been done before reassigning ptr

  return 0;
}
