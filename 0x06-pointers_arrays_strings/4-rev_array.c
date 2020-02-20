#include "holberton.h"
/**
* reverse_array - Write a function that concatenates two strings
* @a : the distination
* @n : the source file
* Return: Always 0 (success)
*/
void reverse_array(int *a, int n)
{
int x, k, len;

if (n % 2 == 0)
len = n / 2;
else
len = (n / 2) + 1;

for (k = 0, n--; k < len; k++, n--)
{
x = a[k];
a[k] = a[n];
a[n] = x;
}
}
