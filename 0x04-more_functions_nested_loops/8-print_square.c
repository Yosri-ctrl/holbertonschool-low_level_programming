#include "holberton.h"
/**
 * print_diagonal - print_diagonal.
 * @n : the length.
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
int i, j;
if (size <= 0)
putchar('\n');
else
{
for (i = 0 ; i < size; i++)
{
for (j = 0 ; j < size; j++)
_putchar('#');
_putchar('\n');
}
}
}
