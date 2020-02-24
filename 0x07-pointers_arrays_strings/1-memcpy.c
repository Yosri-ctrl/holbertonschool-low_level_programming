#include "holberton.h"
/**
* _memcpy - fills memory with a constant byte.
* @dest : the distination
* @src : the source
* @n : the numb of changes
* Return: Always 0 (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
