#include <stdlib.h>
#include "holberton.h"
/**
*string_nconcat - concatenate two strs
*@s1 : the fst str
*@s2 : the scd str
*@n : size
*Return: Always 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *c;
unsigned int i, j, x, y, z;

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

c = malloc((sizeof(char) * i) + (sizeof(char) * n) + 1);
if (c == NULL)
return (NULL);

for (x = 0; x < i; x++)
c[x] = s1[x];

for (y = 0, z = x; y < j && y < n; y++, z++)
{
c[z] = s2[y];
}

c[z] = '\0';
return (c);
}
