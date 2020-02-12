#include <stdio.h>
/**
 * main - Calculate the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
long int x = 1, y = 2, n;

printf("%lu, ", x);
for (i = 2; i <= 50; i++)
{
if (i != 50)
printf("%lu, ", y);
else
printf("%lu\n", y);
n = y;
y += x;
x = n;
}
return (0);
}
