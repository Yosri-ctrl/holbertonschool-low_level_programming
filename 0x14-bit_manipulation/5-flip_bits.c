#include "holberton.h"
#include <stdlib.h>
/**
 * get_bit - get_bit
 * @n : the nbr
 * @index : the index
 * Return: the bit
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int count = 0;

    while(n > 0)
    {
        if ((n & 1) != (m & 1))
        {
            n >>= 1;
            m >>= 1;
            count++;
        }
        else
        {
            n >>= 1;
            m >>= 1;
        }
        
    }

    return (count);
}