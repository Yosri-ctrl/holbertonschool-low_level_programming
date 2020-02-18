#include "holberton.h"
/**
* print_rev - print a string reversed.
* @s : the string.
* Return: Always 0 (success)
*/
void print_rev(char *s)
{
int j, i;

for (j = 0; s[j] != '\0'; j++)
{}

for (i = j-1; s[i] >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
