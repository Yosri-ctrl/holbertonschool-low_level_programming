#include "holberton.h"
/**
* cap_string - function that capitalizes all words of a string
* @c : the distination
* Return: Always 0 (success)
*/
char *cap_string(char *c)
{
int i, j;

for (i = 0; c[i] != '\0'; i++)
;
for (j = 0; j < i; j++)
{
if ((c[j] >= 'a' && c[j] <= 'z') && (c[j - 1] == ' ' || c[j - 1] == '\t' || c[j -1] == '\n'))
c[j] = c[j] - 32;

}
return (c);
}
