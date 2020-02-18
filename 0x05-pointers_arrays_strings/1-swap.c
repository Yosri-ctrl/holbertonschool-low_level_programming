#include "holberton.h"
/**
* swap_int - reset the number n to 98.
* @a : the number changed.
* @b : the second number changed.
* Return: Always 0 (success)
*/
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
