#include <string.h>
#include "holberton.h"
/**
* puts2 -  prints every other character of a string.
* @str : the string.
* Return: Always 0 (success)
*/
void puts2(char *str)
{
int i;
char k;

k = strlen(str);
for (i = 0; i <= k; i = i + 2)
_putchar(str[i]);
_putchar('\n');
}
