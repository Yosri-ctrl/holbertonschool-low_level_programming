#include "holberton.h"
/**
* _strlen - calculate the length.
* @s : the string.
* Return: Always 0 (success)
*/
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{}
return (i);
}
