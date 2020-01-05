#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"

void check_argument(char *arg, int push_arg)
{
  int i = 0;
  for (i = 0; arg[i]; i++)
  {
    if (arg[i] < '0' && arg[i] > '9')
    {
      {
      fprintf(stderr, "L%d: unvalid argument push\n", line_number);
        exit(EXIT_FAILURE);
      }
    }
  }
  printf("inside f :-%s-\n", arg);
  push_arg = atoi(arg);
  printf("push_arg = %d\n", push_arg);
}

void valid_instruction(char *line, int push_arg __attribute__((unused)))
{
int i = 0;
char *operands[10] = {"push", "pall", "pint", "pop", "swap", "add", "nop"};
char *line_copy = malloc(sizeof(line)), *token = NULL, *arg;

strcpy(line_copy, line);
  token = strtok(line, " \n");
  while (token && token[0] == ' ')
  		token = strtok(NULL, " \n");
if (!token)
return;
strcpy(line, token);

for (i = 0; operands[i] && strcmp(operands[i], line) != 0 ; i++)
  ;

if (i >= 7)
    {
    fprintf(stderr, "L%d: unknown instruction %s\n", line_number, line);
      exit(EXIT_FAILURE);
    }

printf("line is -%s-\n", line);

if (strcmp(line, operands[0]) == 0)
{
  arg = strtok(NULL, " \n");
  printf("out-%s-\n", arg);
 check_argument(arg, push_arg);
 printf("arg is %d\n", push_arg);
}
}
