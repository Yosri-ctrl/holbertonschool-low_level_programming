#include "holberton.h"
#include <stdlib.h>
/**
 * set_bit - set_bit
 * @n : the nbr
 * @index : the index
 * Return: the bit
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1;

x <<= index;
*n |= x;
return (1);
}
