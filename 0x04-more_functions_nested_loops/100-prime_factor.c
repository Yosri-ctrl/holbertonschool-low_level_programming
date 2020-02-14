#include <stdlib.h>
#include <stdio.h>
/**
 * main -  Holberton School students.
 *
 * Return: Always 0.
*/

int main(void)
{
unsigned long n = 612852475143;
unsigned long i;

for (i = n - 1; i > 0; i--)
{
if (n % i == 0)
{
printf("%lu\n", i);
return (0);
}
}
}
