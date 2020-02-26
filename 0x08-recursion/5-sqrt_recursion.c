#include "holberton.h"
/**
* _sqrt_recursion - Write a function that print the sqrt
*@n : the numb
*Return: Always 0
*/
int second (int n, int x);

int _sqrt_recursion(int n)
{
  int x = 1;
  return (second(n, x));
}

int second(int n, int x)
{
  int r;
  r =  x * x;

  if (r == n)
  return(x);
  else if (r < n)
  return (second(n, ++x));
  else
  return (-1);
}
