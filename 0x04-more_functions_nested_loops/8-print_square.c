#include "holberton.h"
/**
 * print_square - Write a function that prints a square, followed by a new line.
 * @size : the length.
 * Return: Always 0 (success)
 */
void print_square(int size)
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
