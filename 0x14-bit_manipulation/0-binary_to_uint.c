#include "holberton.h"
#include <stdlib.h>
/**
 * binary_to_uint - binary_to_uint
 * @b : the character
 * Return: the nbm in decimal
 **/
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0, pow;
int i;
for (i = 0; b[i] != '\0';)
{
if (b[i] == '0' || b[i] == '1')
i++;
else
return (0);
}

pow = 1;
i--;
while (i >= 0)
{
if (b[i] == '1')
res += pow;
pow *= 2;
i--;
}

return (res);
}
