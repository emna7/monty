#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void _pop(stack_t **head, unsigned int line_number)
{
stack_t *node;
if (stack == NULL || *stack == NULL)
{
printf("L%u: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
node  = *stack;
(*stack) = (*stack)->next;
free(node);
}
