#include "holberton.h"
/**
 * print_line - print a line.
 * @n : the length of the line.
 * Return: Always 0 (success)
 */
void print_line(int n)
{
int i;

if (n <= 0)
_putchar('\n');
else
{
for (i = 0 ; i < n; i++)
_putchar(95);
_putchar('\n');
}
}
