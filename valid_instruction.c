#include <stdlib.h>
#include <stdio.h>
/**
 * _strcmp - compare two strings
 * @s1: string
 * @s2: string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int i, c = 0;
for (i = 0; s1[i] || s2[i]; i++)
{
if (s1[i] != s2[i])
{
c = s1[i] - s2[i];

break;
}
}
return (c);
}
/**
*/
int valid_instruction(char *instruction)
{
  char *operands[10] = {"push", "pall", "pint", "pop", "swap", "add", "nop"};
  int i = 0;
for (i = 0; operands[i] && _strcmp(operands[i], instruction) != 0 ; i++)
;
if (i < 7)
  return (0);
  else
  return (1);
}
