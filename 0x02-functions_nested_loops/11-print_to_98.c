#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n : is a number
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{

if (n < 98)
for (; n <= 98; n++)
{
_printf("%d", n);
if (n != 98)
printf(", ");
}

else
for (; n >= 98; n--)
{
_printf("%d", n);
if (n != 98)
printf(", ");
}

}
