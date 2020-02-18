#include "holberton.h"
/**
* _strcpy - print the last half of a string.
* @dest : the array.
* @src : the number to print.
* Return: Always 0 (success)
*/
char *_strcpy(char *dest, char *src)
{
int i, k;
for (k = 0; src[k] != '\0'; k++)
;
for (i = 0; i <= k; i++)
dest[i] = src[i];
return (dest);
}
