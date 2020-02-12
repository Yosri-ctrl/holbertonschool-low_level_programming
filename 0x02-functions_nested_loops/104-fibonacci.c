#include <stdio.h>
/**
 * main - Print the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
long int x = 1, y = 2, n, s = 0;

printf("%lu, ", x);
for (i = 2; i <= 98; i++)
{
if (i != 98)
printf("%lu, ", y);
else
printf("%lu\n", y);

n = y;
y += x;
x = n;
}

return (0);
}
