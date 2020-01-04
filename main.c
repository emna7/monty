#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
*
*
*/
int main (int argc, char **argv)
{
  char *buffer, *instruction;
  size_t bufsize = 100;
  int line, line_number = 0;
  FILE *f;


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
  instruction = strtok(buffer, " ");
  instruction = strtok(instruction, "\n");
  if (instruction == NULL)
  {
    fprintf(stderr, "Error: Unable to remove spaces from line\n");
     exit(EXIT_FAILURE);
  }

if (valid_instruction(instruction) == 1)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, instruction);
  exit(EXIT_FAILURE);
}
printf("%d\n", valid_instruction(instruction));

  line = getline(&buffer, &bufsize, f);
  line_number++;
}


return (0);
}
