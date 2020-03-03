#include <stdlib.h>
#include "holberton.h"
/**
*str_concat - concatenates two strings.
*@s1 : the target
*@s2 : the source
*Return: Always 0
*/
char *str_concat(char *s1, char *s2)
{
  int i, j, k;
  int x, y;
  char *c;

  if (s1 == NULL)
  s1 = "";
  if (s2 == NULL)
  s2 = "";

  for (x = 0; s1[x] != '\0'; x++)
  ;
  for (y = 0; s2[y] != '\0'; y++)
  ;

  c = malloc((x * sizeof(*s1)) + (y * sizeof(*s2)) + 1);
  if (c == NULL)
  return (NULL);

  for (i = 0; i < x; i++)
  c[i] = s1[i];

  for (j = 0, k = x; k < x + y + 1; j++, k++)
  c[k] = s2[j];

  return (c);
}
