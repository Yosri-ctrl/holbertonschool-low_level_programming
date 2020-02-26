#include "holberton.h"
/**
* _pow_recursion - Write a function that prints x power y
*@x : the numb
*@y : the power
*Return: Always 0
*/
int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
else
return (x * _pow_recursion(x, --y));
}
