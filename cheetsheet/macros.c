#include <stdio.h>

// Define a macro for the mathematical constant PI
#define PI 3.14159

// Define a macro that squares a number
#define SQUARE(x) ((x) * (x))

int main()
{
  // Use the PI macro in a calculation
  double radius = 5.0;
  double circumference = 2 * PI * radius;
  double area = PI * SQUARE(radius);

  // Use the SQUARE macro in a calculation
  int number = 4;
  int squared = SQUARE(number);

  // Print the results
  printf("Circumference of the circle: %.2f\n", circumference);
  printf("Area of the circle: %.2f\n", area);
  printf("Square of %d: %d\n", number, squared);

  return 0;
}
