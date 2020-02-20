#include "holberton.h"
/**
* _strncpy - Write a function that copy to the distination.
* @dest : the distination
* @src : the source file
* @n : the max number
* Return: Always 0 (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
dest[i] = src[i];

for (; n > i; i++)
dest[i] = '\0';

return (dest);
}
