#include "holberton.h"
/**
* is_prime_number - Write a function that find the prime numb
*@n : the numb
*@x : the counter
*Return: Always 0
*/
int second(int n, int x);
int is_prime_number(int n)
{
int x = 2;

if (n == 2)
return (1);

return (second(n, x));
}

/**
* second - Write a function that print the sqrt
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
