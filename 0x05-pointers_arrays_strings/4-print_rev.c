#include "holberton.h"
/**
* print_rev - print a string reversed.
* @s : the string.
* Return: Always 0 (success)
*/
void print_rev(char *s)
{
int i;
char k;

k = _strlen(s) - 1;
for (i = k; s[i] >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
