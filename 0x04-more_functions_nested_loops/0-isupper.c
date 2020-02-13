#include "holberton.h"
/*
 * _isupper - Check chracters upper or lower.
 * @c : the character.
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
