#include <assert.h>
#include <stdio.h>
#include <limits.h>

// Adds two integers and returns the sum, ensuring that neither is negative.
int add(int a, int b)
{
  assert(a >= 0); // Ensure 'a' is non-negative
  assert(b >= 0); // Ensure 'b' is non-negative
  return a + b;
}

// Multiplies two integers and returns the product, asserting no overflow for simplicity.
int multiply(int a, int b)
{
  assert(a >= 0 && b >= 0);           // Ensure both 'a' and 'b' are non-negative
  assert(a == 0 || INT_MAX / a >= b); // Prevent potential overflow
  return a * b;
}

int main()
{
  int result_add = add(10, 20);
  printf("Addition result: %d\n", result_add);

  int result_multiply = multiply(10, 20);
  printf("Multiplication result: %d\n", result_multiply);

  return 0;
};
