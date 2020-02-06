#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, a, b;

	for (i = 0 ; i < 100 ; i++)
	{
	a = i / 10;
	b = i % 10;
	if (a < b)
	{
	putchar(a + '0');
	putchar(b + '0');
	if (i < 100)
	{
	putchar(44);
	putchar(32);
	}
	}
	}
	putchar('\n');

	return (0);
}
