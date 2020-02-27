#include "holberton.h"
/**
* _sqrt_recursion - Write a function that print the sqrt
*@n : the numb
*@x : the counter
*Return: Always 0
*/
int _second(int n, int x);

int _sqrt_recursion(int n)
{
int x = 1;
return (_second(n, x));
}

/**
* _second - Counter for _sqrt_recursion
*@n : the numb
*@x : the counter
*Return: Always 0
*/

int _second(int n, int x)
{
int r;
r =  x * x;

if (r == n)
return (x);
else if (r < n)
return (_second(n, ++x));
else
return (-1);
}
