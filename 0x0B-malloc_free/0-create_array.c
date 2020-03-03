#include <stdlib.h>
#include "holberton.h"
/**
*create_array - create an array
*@size: the size of the array
*@c: the char
*Return: Always 0
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;

if (size == 0)
return NULL;

a = malloc(size * sizeof(*a));

if (a == NULL)
return NULL;

for (i = 0; i < size; i++)
a[i] = c;

return (a);
}
