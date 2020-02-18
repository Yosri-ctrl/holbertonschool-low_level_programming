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
int n = 0, i, k;


for (k = 0; str[k] != '\0'; k++)
;

if (k % 2 == 0)
n = k / 2;
else
n = ((k - 1) / 2) + 1;

for (i = n; i <= k - 1; i++)
{
_putchar(str[i]);
}
_putchar('\n');

}
