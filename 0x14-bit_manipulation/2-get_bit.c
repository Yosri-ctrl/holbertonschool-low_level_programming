#include "holberton.h"
#include <stdlib.h>
/**
 * get_bit - get_bit
 * @n : the nbr
 * @index : the index
 * Return: the bit
 **/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int x = 1;

return ((n >> index) & x);
}
