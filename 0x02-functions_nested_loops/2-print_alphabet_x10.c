#include "holberton.h"
/**
 * print_alphabet - Entry point
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
char c;
int i;

for (i = 0 ; i <= 10 ; i++)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
