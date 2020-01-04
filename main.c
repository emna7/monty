#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

// void (*get_function(char *instruction))(stack_t *, unsigned int)
// {
//   instruction_t ops[] = {
//     {"pall", _pall},
//     {"pint", _pint},
//     {"pop", _pop},
//     {"swap", _swap},
//     {"add", _add},
//     {"nop", _nop},
//     {NULL, NULL}
//   }
//   int i = 0;
//   for (i = 0; ops[i]; i++)
//   {
//     if (_strcmp(ops[i].opcode, instruction) == 0)
//     {
//       return (ops[i].f);
//     }
//   }
// }



/**
*
*
*/
int main (int argc, char **argv)
{
  char *buffer, *instruction, *line_copy;
  size_t bufsize = 100;
  int line, line_number = 0, push_parameter;
  FILE *f;
  char *operands[10] = {"push", "pall", "pint", "pop", "swap", "add", "nop"};
  // void (*func)(stack_t **, unsigned int);
  stack_t *head = NULL;

  if (argc != 2)
  {
    fprintf(stderr, "USAGE: monty file\n");
     exit(EXIT_FAILURE);
  }

  f = fopen(argv[1], "r");
  if (f == NULL)
  {
    fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
     exit(EXIT_FAILURE);
  }

  buffer = (char *)malloc(bufsize * (sizeof(char)));
  if (!buffer)
  {
    fprintf(stderr, "Error: malloc failed\n");
    exit(EXIT_FAILURE);
  }
  line = getline(&buffer, &bufsize, f);
  if (line == -1)
  {
    fprintf(stderr, "Error: Unable to read from file %s\n", argv[1]);
     exit(EXIT_FAILURE);
  }
  line_number++;

  while(line != -1)
  {
  line_copy = _strcpy(buffer);
  instruction = strtok(buffer, " ");
  instruction = strtok(instruction, "\n");
  if (instruction == NULL)
  {
    fprintf(stderr, "Error: Unable to remove spaces from line\n");
     exit(EXIT_FAILURE);
  }
printf("instruction is: %s\n", instruction);
if (valid_instruction(instruction, operands) == 1)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, instruction);
  exit(EXIT_FAILURE);
}
if (_strcmp(instruction, operands[0]) == 0)
{
push_parameter = push_argument(line_copy, line_number);
printf("argument to push is: %d\n", push_parameter);
_push(&head, push_parameter);
}
else if (_strcmp(instruction, operands[1]) == 0)
_pall(&head, line_number);
// else
// func = get_function(instruction);
// func(&head, line_number);

  line = getline(&buffer, &bufsize, f);
  line_number++;
}
return (0);
}
