#include <stdio.h>

int main()
{
  int i, j;

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("i=%d, j=%d\n", i, j);
      if (j == 2)
      {
        goto end_of_loop;
      }
    }
  }

  // This label can be jumped to from anywhere in the function.
end_of_loop:
  printf("Jumped to the end_of_loop label.\n");

  return 0;
}
