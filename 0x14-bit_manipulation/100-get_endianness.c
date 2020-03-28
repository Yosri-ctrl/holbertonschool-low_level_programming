#include "holberton.h"
#include <stdlib.h>
/**
 * flip_bits - flip_bits
 * @n : the first nbr
 * @m : the second nbr
 * Return: the bit
 **/
int get_endianness(void)
{   
    int i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}