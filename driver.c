#include <stdlib.h>
#include <stdio.h>
#include "mergesort.h"
#include "linkedlist.h"

// helper function to print the elements in an array
void printArray(long *arr, int size)
{
  for (int i = 0; i < size; i++)
    printf("%ld ", *(arr + i));

  printf("\n");
}

// helper function to read longs from standard input
// inserts the elements into the linked list parameter
// returns the number of elements read
int readinput(struct node **head)
{
  char *curr, *end, *buf = 0;
  size_t size = 0;
  long val;
  int numRead = 0;

  while (getline(&buf, &size, stdin) > 0) {
    curr = buf;

    for (curr = buf; ; curr = end) {
      val = strtol(curr, &end, 0);

      if (curr == end)
	break;

      list_append(head, val);
      ++numRead;
    }

    free(buf);
    buf = 0;
    size = 0;
  }

  return numRead;
}

// helper function to convert a linked list of longs
// to an array of longs
long *makeArray(struct node *head)
{
  int size = list_count(head);
  long *arr = (long *) malloc(sizeof(long) * size);
  int i;

  for (i = 0; i < size; i++) {
    *(arr + i) = head->num;
    head = head->next;
  }

  return arr;
}

int main(int argc, char *argv[]) {
  struct node* head = 0;
  int num = readinput(&head);
  list_print(head);
  long *arr = makeArray(head);
  merge_sort(arr, num);
  printArray(arr, num);
  free(arr);
  list_free(head);
}
