#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @n : is a number
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
_putchar(n % 10 + '0');
return (n % 10);
}
