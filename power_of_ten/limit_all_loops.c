#include <stdio.h>
#include <stdlib.h>

// Linked list node type
typedef struct node
{
  int value;
  struct node *next;
} node;

int list_search(node *head, int value)
{
  const int MAX_ITER = 1000;
  int count = 0;

  node *current = head;

  // Check hard upper limit
  while (current != NULL && count < MAX_ITER)
  {
    if (current->value == value)
    {
      // Value found
      return 1;
    }
    current = current->next;
    count++;
  }
  // Value not found
  return 0;
}
