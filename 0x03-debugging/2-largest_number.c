#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
if (a < b)
{
x = a;
a = b;
b = x;
}
if (b > c)
{
x = b;
b = c;
c = x;
}
if (a > b && b < c)
{
largest = a;
}
else if (b > a && a > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
