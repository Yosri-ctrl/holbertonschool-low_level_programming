#include "holberton.h"
/*
 * print_most_numbers - print num exept 2 & 4.
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
int i;
for (i =0 ; i <= 9 ; i++)
{
if(i != 2 && i != 4)
_putchar (i + '0');
}
_putchar ('\n');
}
