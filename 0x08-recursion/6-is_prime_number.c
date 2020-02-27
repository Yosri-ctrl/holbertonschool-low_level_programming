#include "holberton.h"
/**
* _sqrt_recursion - Write a function that print the sqrt
*@n : the numb
*@x : the counter
*Return: Always 0
*/
int second(int n, int x);
int is_prime_number(int n)
{
int x = 2;
return (second(n, x));
}

/**
* _sqrt_recursion - Write a function that print the sqrt
*@n : the numb
*@x : the counter
*Return: Always 0
*/

int second(int n, int x)
{
if (n < x)
return (0);

else if (n / 2 < x)
return (1);

else
return (second(++x, n));
}
