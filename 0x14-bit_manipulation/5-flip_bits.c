#include "holberton.h"
#include <stdlib.h>
/**
 * flip_bits - flip_bits
 * @n : the first nbr
 * @m : the second nbr
 * Return: the bit
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int count = 0;

while (n > 0)
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
