#include "holberton.h"
#include <stdlib.h>
/**
 * get_endianness - get_endianness
 * Return: the 0 or 1
 **/
int get_endianness(void)
{   
int i = 1;
if (*(char *)&i == 1)
return (1);
else
return (0);
}
