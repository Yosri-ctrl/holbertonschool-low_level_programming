#include <stdlib.h>
#include "holberton.h"
/**
*_calloc - concatenate two strs
*@nmemb : the
*@size : size
*Return: Always 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *a;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

a = malloc(nmemb * size);
if (a == NULL)
return (NULL);

for (i = 0; i < nmemb; i++)
{
a[i] = 0;
}

return (a);
}
