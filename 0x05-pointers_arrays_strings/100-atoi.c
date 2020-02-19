#include "holberton.h"
/**
* _atoi - reset the number n to 98.
* @s : the number changed.
* Return: Always 0 (success)
*/
int _atoi(char *s)
{
int i, sign = 1, num = 0, res;


for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sign = sign * (-1);

else if ((s[i] >= '0') && (s[i] <= '9'))
num = num * 10 + (s[i] - '0');

}
res = (sign *num);

return (res);
}
