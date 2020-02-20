#include "holberton.h"
/**
* string_toupper - Write a function that change the case
* @c : the chain
*/
char *string_toupper(char *c)
{
int i, j;

for (i = 0; c[i] != '\0'; i++)
;
for (j = 0; j < i; j++)
{
if (c[j] >= 'a' && c[j] <= 'z')
c[j] = c[j] - 32;

}
return (c);
}
