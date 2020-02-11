#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int print_alphabet(void)
{
int i;

for (i = 'a' ; i <= 'z' ; i++)
_putchar(i + '0');
_putchar('\n');

return (0);
}
