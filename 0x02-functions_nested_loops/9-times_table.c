#include "holberton.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
int i, j;

for (i = 0; i <= 9 ; i++)
{
for (j = 0; j <= 9 ; j++)
{
_putchar(i * j + '0');
_putchar(':');
_putchar(' ');
}
_putchar('\n');
}
_putchar(' ');
}
