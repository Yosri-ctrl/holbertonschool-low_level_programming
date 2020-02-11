#include "holberton.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
int i, j, x;

for (i = 0; i <= 9 ; i++)
{
for (j = 0; j <= 9 ; j++)
{
x = i * j;
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
if (j < 9)
{
_putchar(':');
_putchar(' ');
}
else
_putchar('$');
}
_putchar('\n');
}
}
