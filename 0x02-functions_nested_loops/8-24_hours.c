#include "holberton.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (success)
 */
int jack_bauer(void)
{
int i, j;

for (i = 0 ; i < 24 ; i++)
{
_putchar(i / 10);
_putchar(i % 10);
_putchar(':');
for (j = 0 ; j < 60 ; j++)
{
_putchar(j / 10);
_putchar(j % 10);
}
}
}
