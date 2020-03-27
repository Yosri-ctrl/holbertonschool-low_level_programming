#include "holberton.h"
#include <stdlib.h>
/**
 * clear_bit - clear_bit
 * @n : the nbr
 * @index : the index
 * Return: the bit
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1;

x <<= index;
x = ~x;
*n &= x;
return (1);
}
