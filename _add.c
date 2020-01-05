#include "monty.h"

/**
 * _add - adds top 2 nodes of the stack
 * @stack: double pointer to top of stack
 * @line_number: value of node
 * Return: nothing
 **/
void _add(stack_t **stack, unsigned int line_number)
{
int tmp;
if (*stack == NULL || (*stack)->next == NULL)
{
printf("L%u: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
tmp = (*stack)->n;
_pop(stack, line_number);
(*stack)->n += tmp;
}
