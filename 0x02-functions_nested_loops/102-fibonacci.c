#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
{
int i, x = 0, y = 1, n;

for (i = 1; i <= 50; i++)
{
printf("%d, ", x);
if (x >= 0)
{
n = y;
y = x + y;
x = n;
}
}
}
