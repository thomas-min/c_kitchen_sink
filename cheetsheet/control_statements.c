#include <stdio.h>
#include <stdlib.h>

int main()
{

  int isStudent = 0;
  int isSmart = 0;

  if (isStudent != 0 && isSmart != 0)
  {
    printf("You are a student\n");
  }
  else if (isStudent != 0 && isSmart == 0)
  {
    printf("You are not a smart student\n");
  }
  else
  {
    printf("You are not a student and not smart\n");
  }

  // >, <, >=, <=, !=, ==
  if (1 > 3)
  {
    printf("number omparison was true\n");
  }

  if ('a' > 'b')
  {
    printf("character comparison was true\n");
  }

  char myGrade = 'A';
  switch (myGrade)
  {
  case 'A':
    printf("You Pass\n");
    break;
  case 'F':
    printf("You fail\n");
    break;
  default:
    printf("Invalid grade\n");
  }

  int index = 1;
  while (index <= 5)
  {
    printf("%d \n", index);
    index++;
  }

  index = 1;
  do
  {
    printf("%d \n", index);
    index++;
  } while (index <= 5);

  for (int i = 0; i < 5; i++)
  {
    printf("%d \n", i);
  }

  return 0;
}