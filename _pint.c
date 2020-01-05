#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void _pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
printf("L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
else
printf("%d\n", (*stack)->n);
}
