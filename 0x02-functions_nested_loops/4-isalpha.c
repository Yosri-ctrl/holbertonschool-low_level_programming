#include "holberton.h"
/**
 * _islower - Entry point
 * @c : is a chracter lower or upper
 * Return: Always 0 (success)
 */
int _islower(int c)
{
if ((c >= 97 && c <= 122) && (c >= 65 && c <= 90))
{
return (1);
}
else
return (0);
}