#include "holberton.h"
/**
 * print_numbers - print from 0 to 9.
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
int i;

for (i = 0 ; i <= 9 ; i++)
_putchar (i + '0');
_putchar ('\n');
}
