#include "holberton.h"
/**
 * print_diagonal - print_diagonal.
 * @n : the length.
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
int i, j;
if (n < 0)
_putchar('\n');
else
{
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j <= i ; j++)
{
if (j != 0)
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
