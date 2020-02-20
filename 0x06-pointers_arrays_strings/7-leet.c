#include "holberton.h"
/**
* leet -  function that encodes a string into 1337.
* @c : the distination
* Return: Always 0 (success)
*/
char *leet(char *c)
{
int i;

for (i = 0; c[i] != '\0'; i++)
{
while ((c[i] == 'o') || (c[i] == 'O'))
c[i] = '0';
while ((c[i] == 'l') || (c[i] == 'L'))
c[i] = '1';
while ((c[i] == 'e') || (c[i] == 'E'))
c[i] = '3';
while ((c[i] == 'a') || (c[i] == 'A'))
c[i] = '4';
while ((c[i] == 't') || (c[i] == 'T'))
c[i] = '7';
}
return (c);
}
