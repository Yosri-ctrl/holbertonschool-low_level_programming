#include "holberton.h"
/**
* _strncat - Write a function that concatenates two strings.
* @dest : the distination
* @src : the source file
* @n : the max number
* Return: Always 0 (success)
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
;

for (j = 0; j < n; j++)
dest[i + j] = src[j];

dest[i + j] = '\0';
return (dest);
}
