#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, a, b, c;

	for (i = 0; i < 1000; i++)
	{
	a = i / 100;
	b = (i / 10) % 10;
	c = i % 10;

	if (a < b && b < c)
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');

	if (i < 789)
	{
	putchar(44);
	putchar(32);
	}
	}
	}
	putchar('\n');

	return (0);
}
