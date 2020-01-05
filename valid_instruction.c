#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
/**
*/
int valid_instruction(char *instruction, char *operands[10])
{

  int i = 0;
for (i = 0; operands[i] && _strcmp(operands[i], instruction) != 0 ; i++)
;
if (i < 7)
  return (0);
  else
  return (1);
}
