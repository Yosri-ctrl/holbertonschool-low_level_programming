#include "holberton.h"
/**
* puts2 -  prints every other character of a string.
* @str : the string.
* Return: Always 0 (success)
*/
void puts2(char *str)
{
int k, i;

for (k = 0; str[k] != '\0'; k++)
;

for (i = 0; i <= k - 1; i = i + 2)
_putchar(str[i]);
_putchar('\n');

}
