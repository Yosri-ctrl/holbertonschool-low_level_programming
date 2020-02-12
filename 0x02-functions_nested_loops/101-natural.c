#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int s = 0, i, n = 1024;

for (i = 0; i < n; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
s = s + i;
}
printf("%d\n", s);

return (0);
}
