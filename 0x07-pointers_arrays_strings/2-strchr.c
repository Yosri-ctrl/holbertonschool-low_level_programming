#include "holberton.h"
/**
* _strchr - fills memory with a constant byte.
* @s : the distination
* @c : the numb of changes
* Return: Always 0 (success)
*/
char *_strchr(char *s, char c)
{
for (;*s != '\0'; s++)
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
}

return (s);
}
