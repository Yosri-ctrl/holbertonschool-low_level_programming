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
	int x;

	for (x = '0' ; x <= '9' ; x++)
	putchar(x);
	for (x = 'a' ; x <= 'g' ; x++)
	putchar(x);
	putchar('\n');

	return (0);
}
