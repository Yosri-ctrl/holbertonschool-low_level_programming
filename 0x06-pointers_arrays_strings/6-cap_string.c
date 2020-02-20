#include "holberton.h"
/**
* cap_string - function that capitalizes all words of a string
* @c : the distination
* Return: Always 0 (success)
*/
char *cap_string(char *c)
{
int i, j, k, m;
char x[] = " \n\t,.:\"(){}?!";

for (i = 0; c[i] != '\0'; i++)
;
for (m = 0; x[m] != '\0'; m++)
;

for (j = 0; j < i; j++)
{
for (k = 0; k < m; k++)
if ((c[j] >= 'a' && c[j] <= 'z') && (c[j - 1] == x[k]))
c[j] = c[j] - 32;
}
return (c);
}
