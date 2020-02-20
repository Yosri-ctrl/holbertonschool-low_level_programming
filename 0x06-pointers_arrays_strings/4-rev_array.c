#include "holberton.h"
/**
* reverse_array - Write a function that concatenates two strings
* @a : the distination
* @n : the source file
*/
void reverse_array(int *a, int n)
{
int x, k;

for (k = 0; k <= (n / 2); k++, n--)
{
x = a[k];
a[k] = a[n];
a[n] = x;
}
}
