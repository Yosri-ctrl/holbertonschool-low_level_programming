#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
	putchar(i + '0');
	putchar(44);
	putchar(32);
	}
	putchar('\n');

	return (0);
}