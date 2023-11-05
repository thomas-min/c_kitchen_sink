#include <stdio.h>

// Function prototype
unsigned long long fibonacci(int n);

int main()
{
  int position = 10;
  unsigned long long fibNumber;

  // Call the recursive function
  fibNumber = fibonacci(position);

  printf("Fibonacci number at position %d is %llu\n", position, fibNumber);

  return 0;
}

// Recursive function to calculate the n-th Fibonacci number
unsigned long long fibonacci(int n)
{
  // Base cases
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
