#include "holberton.h"
/**
* _strchr - fills memory with a constant byte.
* @s : the distination
* @c : the numb of changes
* Return: Always 0 (success)
*/
char *_strchr(char *s, char c)
{
while (*s != (char)c)
{
if (!s++)
return (0);
}
return (char *)s;
}
