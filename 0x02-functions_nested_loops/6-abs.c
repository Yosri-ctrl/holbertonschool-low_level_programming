#include "holberton.h"
/**
 * _abs - Entry point
 * @n : is a number
 * Return: Always 0 (success)
 */
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
return (n);
}
