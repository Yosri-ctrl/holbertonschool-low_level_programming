#include "holberton.h"
#include <stdlib.h>
/**
 * print_binary - print_binary
 * @n : the nbr
 * @index : the index 
 **/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int x = 1;

return ((n >> index) & x);
}