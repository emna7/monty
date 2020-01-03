#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

// /**
//  * _strcmp - compare two strings
//  * @s1: string
//  * @s2: string
//  * Return: int
//  */
// int _strcmp(char *s1, char *s2)
// {
// int i, c = 0;
// for (i = 0; s1[i] || s2[i]; i++)
// {
// if (s1[i] != s2[i])
// {
// c = s1[i] - s2[i];
//
// break;
// }
// }
// return (c);
// }

/**
*/
// int valid_instruction(char *instruction, int line_number)
// {
//   char operands[8][10] = {"push", "pall", "pint", "pop", "swap", "add", "nop"};
//   int i = 0;
//
// while (operands[i])
// {
//   // printf("%d\n", strcmp(operands[i], instruction));
// if (strcmp(operands[i], instruction) == 0)
//     return (1);
// i++;
// }
// fprintf(stderr, "L%d: unknown instruction %s", line_number, instruction);
//   exit(EXIT_FAILURE);
// }
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
    fprintf(stderr, "USAGE: monty file");
     exit(EXIT_FAILURE);
  }

  f = fopen(argv[1], "r");
  if (f == NULL)
  {
    fprintf(stderr, "Error: Can't open file %s", argv[1]);
     exit(EXIT_FAILURE);
  }

  buffer = (char *)malloc(bufsize * (sizeof(char)));
  if (!buffer)
  {
    fprintf(stderr, "Unable to allocate buffer");
    exit(EXIT_FAILURE);
  }
  line = getline(&buffer, &bufsize, f);
  if (line == -1)
  {
    fprintf(stderr, "Error: Unable to read from file %s", argv[1]);
     exit(EXIT_FAILURE);
  }
  line_number++;

  while(line != -1)
  {
  instruction = strtok(buffer, " ");
  instruction = strtok(instruction, "\n");
  if (instruction == NULL)
  {
    fprintf(stderr, "Error: Unable to split line");
     exit(EXIT_FAILURE);
  }

printf("%s\n", instruction);


printf("%d\n", valid_instruction(instruction, line_number));

  line = getline(&buffer, &bufsize, f);
  line_number++;
}

return (0);
}
