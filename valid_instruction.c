#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*/
int valid_instruction(char *instruction, int line_number)
{
  char operands[8][10] = {"push", "pall", "pint", "pop", "swap", "add", "nop"};
  int i = 0;
for (i = 0; operands[i] && strcmp(operands[i], instruction) != 0 ; i++)
;
if (i < 7)
  return (0);
  else
  {
    printf("ok\n");
  fprintf(stderr, "L%d: unknown instruction %s", line_number, instruction);
    exit(EXIT_FAILURE);
  }
}
