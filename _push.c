#include <stdio.h>
#include <stdlib.h>

#include "monty.h"

/**
*/
int push_argument(char *line_cp, int line_number)
{
  int i = 0, j = 0, k = 0, ar;
  char *arg;

  for (i = 4; line_cp[i] == ' '; i++)
  ;
  arg = malloc(sizeof(line_cp) - k);
  if (arg == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed in line %d\n", line_number);
		exit(EXIT_FAILURE);
	}
  k = i;

  for (j = 0; line_cp[k] != ' ' && line_cp[k]; j++, k++)
  {
    arg[j] = line_cp[k];

  }
  ar = atoi(arg);
  free(arg);
  return (ar);
}

void _push(stack_t **head, int push_parameter)
{
  stack_t *new;

  new = malloc(sizeof(stack_t));
  if (new == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
  new->n = push_parameter;
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
