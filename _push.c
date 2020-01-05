#include <stdio.h>
#include <stdlib.h>
#include "monty.h"


void _push(stack_t **head, int push_arg, int line_number)
{
  stack_t *new;
  new = malloc(sizeof(stack_t));
  if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed, in line %d\n", line_number);
		exit(EXIT_FAILURE);
	}
  new->n = push_arg;
  if (*head == NULL)
  {
  new->next = NULL;
  new->prev = NULL;
  *head = new;
  }
  else
  {
    (*head)->prev = new;
    new->next = *head;
    new->prev = NULL;
    *head = new;
  }
}
