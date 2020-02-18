#include <stdio.h>
#include <string.h>
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

k = strlen(s);
for (i = k; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
