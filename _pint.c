#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void _pint(stack_t **head, unsigned int line_number)
{
if (*head == NULL)
printf("head is empty instruction in line: %d\n", line_number);
else
printf("%d\n", (*head)->n);
}
