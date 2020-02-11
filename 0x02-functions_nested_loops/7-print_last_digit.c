#include "holberton.h"
/**
 * print_last_digit - return the last digit
 * @n : the long number
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
if (x >= 0)
{
_putchar(x % 10 + '0');
return (x % 10);
}
else
_putchar((x % 10) * -1 + '0');
return ((x % 10) * -1);
}
