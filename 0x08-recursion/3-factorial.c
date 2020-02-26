#include "holberton.h"
/**
* factorial - Write a function that prints a string
*@n : the numb
*Return: Always 0
*/
int factorial(int n)
{
int f = 1;

if (n < 0)
return (-1);
if (n <= 1)
return (n);
else
{
f = n * factorial(n - 1);
return (f);
}
}
