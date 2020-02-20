#include "holberton.h"
/**
* leet -  function that encodes a string into 1337.
* @c : the distination
* Return: Always 0 (success)
*/
char *leet(char *c)
{
int i, j;
char x[] = "aAeEoOtTlL";
char y[] = "43071";


for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; x[j] != '\0'; j++)
if (c[i] == x[j])
c[i] = y[j / 2];
}
return (c);
}
