#include <assert.h>
#include <stdio.h>
#include <limits.h>

int sum(int a, int b)
{
  return a + b;
}

int main()
{
  int a = 10;
  int b = 20;

  int c = sum(a, b);
  // Validate every return value
  assert(c < INT_MAX);

  // Cast to void if return type is not used or not relevant
  (void)printf("Hello %s", "John Doe");

  return 0;
}
