#include "holberton.h"
/**
 * print_triangle - print_triangle.
 * @size : the length.
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
int i, j, k;

if (size <= 0)
_putchar('\n');
else
{
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
_putchar(' ');

for (k = 0; k <= i; k++)
_putchar('#');

_putchar('\n');
}
}
}
