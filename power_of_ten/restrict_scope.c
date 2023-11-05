#include <assert.h>
#include <stdio.h>

int globalVar = 20;

void myFunction()
{
  int localVar = 10;
  globalVar = 30;
}

void myOtherFunction()
{
  assert(globalVar == 20);
}