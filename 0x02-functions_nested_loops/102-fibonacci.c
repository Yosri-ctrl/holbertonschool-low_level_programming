#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i, n, x = 0, y = 1;

for (i = 0; i <= 50; i++)
{
if (i < 50)
printf("%d, ", x);
else
printf("%d\n", x);
n = y;
y = x + y;
x = n;
}
}
}
