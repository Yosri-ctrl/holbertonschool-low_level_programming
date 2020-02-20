#include "holberton.h"
/**
* reverse_array - Write a function that concatenates two strings
* @a : the distination
* @n : the source file
*/
void reverse_array(int *a, int n)
{
int i, x, k;
i = n;
for (k = 0, i--; k <= (i / 2); k++, i--)
{
x = a[k];
a[k] = a[i];
a[i] = x;
}
}
