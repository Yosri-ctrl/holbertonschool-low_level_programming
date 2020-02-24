#include "holberton.h"
/**
* _strpbrk - fills memory with a constant byte.
* @s : the distination
* @accept : the source
* Return: Always 0 (success)
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *c;

for (i = 0; s[i] != '\0'; i++)
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
{
c = &s[i];
return (c);
}
return (0);
}
