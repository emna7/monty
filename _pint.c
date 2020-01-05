#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void _pint(stack_t **stack, unsigned int line_number)
{
<<<<<<< HEAD
if (*stack == NULL)
{
printf("L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
else
printf("%d\n", (*stack)->n);
=======
if (*head == NULL)
printf("head is empty instruction in line: %d\n", line_number);
else
printf("%d\n", (*head)->n);
>>>>>>> f59dadd5b099ac731fce50896d264a7be825c0d0
}
