#include "holberton.h"

/**
 * more_numbers - print tell you are 14.
 * Return: Always 0 (success)
*/
void more_numbers(void)
{
int i, j;
for (i = 0 ; i <= 10 ; i++)
{
for (j = 1 ; j <= 14 ; j++)

if (j >= 10)
{
_putchar (j / 10 + '0');
}
_putchar (j % 10 + '0');

_putchar ('\n');
}
}
