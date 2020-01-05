#include <stdio.h>
#include <stdlib.h>
/**
*/
char *_strcpy(char *s)
{
  char *r = malloc(sizeof(s));
  int i = 0;
  while (s[i])
  {
    r[i] = s[i];
    i++;
  }
return (r);
}

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
