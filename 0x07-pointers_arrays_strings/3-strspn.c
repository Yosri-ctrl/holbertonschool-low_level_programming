#include "holberton.h"
/**
* _strspn - fills memory with a constant byte.
* @s : the distination
* @accept : the const
* Return: Always 0 (success)
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int x = 0;

for (i = 0; s[i] != '\0'; i++)
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
x++;

return (x);
}
