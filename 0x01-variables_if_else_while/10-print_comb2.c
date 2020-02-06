#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
int j;

for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i < j)
{
putchar(44);
putchar(32);
}
}
}

return  (0);
}
