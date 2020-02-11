#include "holberton.h"
/**
 * print_to_98 - Entry point
 * @a : is a number
 * Return: Always 0 (success)
 */
void print_to_98(int a)
{

if (a < 98)
for (; a <= 98; a++)
{
_printf("%d", a);
if (a != 98)
_putchar(',');
}

else
for (; a >= 98; a--)
{
_printf("%d", a);
if (a != 98)
_putchar(',');
}

}
