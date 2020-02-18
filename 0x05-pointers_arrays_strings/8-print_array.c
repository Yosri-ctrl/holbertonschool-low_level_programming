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
n = n - 1;
for (i = 0; n >= 0; i++, n--)
{
printf("%d", a[i]);
if (n > 0)
printf(", ");
}
printf("\n");

}
