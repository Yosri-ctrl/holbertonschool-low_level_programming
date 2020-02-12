#include "holberton.h"
/**
 * print_last_digit - return the last digit
 * @n : the long number
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
if (n >= 0)
{
_putchar(n % 10 + '0');
return (n % 10);
}
else
{
_putchar((n % 10) * -1 + '0');
return ((n % 10) * -1);
}
}
