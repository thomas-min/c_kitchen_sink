#include <stdio.h>
#include <stdlib.h>

// Fills the array with sequential numbers starting from zero.
void fillArray(int *array, int size)
{
  for (int i = 0; i < size; ++i)
  {
    array[i] = i;
  }
}

// Prints the array elements, one per line.
void printArray(int *array, int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d\n", array[i]);
  }
}

// Calculates the sum of the array elements.
int sumArray(int *array, int size)
{
  int sum = 0;
  for (int i = 0; i < size; ++i)
  {
    sum += array[i];
  }
  return sum;
}

// Main program to demonstrate array operations.
int main()
{
  const int MAX_ARRAY_SIZE = 50;

  int array[MAX_ARRAY_SIZE];
  int size = MAX_ARRAY_SIZE;

  fillArray(array, size);
  printArray(array, size);
  printf("Sum: %d\n", sumArray(array, size));

  return 0;
}
