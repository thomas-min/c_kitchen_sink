#include <stdio.h>

int main()
{
  int a = 42;
  int *ptr = &a;    // The address of variable 'a' is stored in pointer 'ptr'
  int value = *ptr; // Dereference 'ptr' to get the value of 'a'

    return 0;
}