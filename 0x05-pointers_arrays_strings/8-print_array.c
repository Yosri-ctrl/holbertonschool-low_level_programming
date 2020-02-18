#include <stdio.h>
#include "holberton.h"
/**
* print_array - print the last half of a string.
* @a : the array.
* @n : the number to print.
* Return: Always 0 (success)
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
else
printf("\n");
}
}
