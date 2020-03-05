#include <stdlib.h>
#include "holberton.h"
/**
*malloc_checked - allocate the memory
*@b : the size
*Return: Always 0
*/
void *malloc_checked(unsigned int b)
{
char *c;

c = malloc(b);
if (c == NULL)
exit(98);

return (c);
}
