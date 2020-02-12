#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i, n,
long int x = 1, y = 2;

for (i = 0; i <= 50; i++)
{
if (i < 50)
printf("%lu, ", x);
else
printf("%lu\n", x);
n = y;
y += x;
x = n;
}
}
}
