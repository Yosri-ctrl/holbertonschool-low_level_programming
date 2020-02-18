#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
* puts_half- print the last half of a string.
* @str : the string.
* Return: Always 0 (success)
*/
void puts_half(char *str)
{
int i;
char n, k;

k = strlen(str) - 1;

if (strlen(str) % 2 == 0)
n = (strlen(str)) / 2;
else
n = k / 2;

for (i = n; i <= k; i++)
_putchar(str[i]);
_putchar('\n');

}
