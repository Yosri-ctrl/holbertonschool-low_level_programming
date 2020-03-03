#include <stdlib.h>
#include "holberton.h"
/**
*_strdup - duplicate an str
*@str: the str
*Return: Always 0
*/
char *_strdup(char *str)
{
int i, j;
char *c;

if (str == NULL)
return (NULL);

for (j = 0; str[j] != '\0'; j++)
;
c = malloc (j * sizeof(*c));

if (a == NULL)
return (NULL);

for (i = 0; i < j; i++)
c[i] = str[i];

return (c);
}
