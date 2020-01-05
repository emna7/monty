#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
#include <string.h>
int line_number = 0;

void (*get_function(char *line))(stack_t **, unsigned int)
{
  instruction_t ops[] = {
    {"pall", _pall},
    // {"pint", _pint},
    // {"pop", _pop},
    // {"swap", _swap},
    // {"add", _add},
    // {"nop", _nop},
    {NULL, NULL}
  };
  int i = 0;
  for (i = 0; ops[i].opcode; i++)
  {
    if (strcmp(ops[i].opcode, line) == 0)
    {
      return (ops[i].f);
    }
  }
  return (NULL);
}


int main (int argc, char **argv)
{
FILE *f;
char *line;
size_t bufsize = 100;
int read_line, push_arg = 0;
stack_t *stack = NULL;
void (*func)(stack_t **, unsigned int);

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

    line = (char *)malloc(bufsize * (sizeof(char)));
    if (!line)
    {
      fprintf(stderr, "Error: malloc failed\n");
      exit(EXIT_FAILURE);
    }
    read_line = getline(&line, &bufsize, f);
    if (read_line == -1)
    {
      fprintf(stderr, "Error: Unable to read from file %s\n", argv[1]);
       exit(EXIT_FAILURE);
    }
line_number++;


     while(read_line != -1)
     {
// check if instruction is valid

valid_instruction(line, push_arg);

if (strcmp(line, "push") == 0)
  _push(&stack, push_arg, line_number);
else
{
  func = get_function(line);
  func(&stack, line_number);
}



  read_line = getline(&line, &bufsize, f);
  line_number++;
     }
     return (0);
}
