#include <stdio.h>
/**
 * main - Calculate the totale of Fibonacci numbers
 * that are less then 4000000.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
long int x = 1, y = 2, n, s = 0;

for (i = 2; s < 4000000; i++)
{
if ((y % 2) == 0)
s += y;
n = y;
y += x;
x = n;
}
printf("%lu\n", s);

return (0);
}
