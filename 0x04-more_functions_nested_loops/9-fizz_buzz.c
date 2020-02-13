#include "holberton.h"
#include <stdlib.h>
/**
 * print_diagonal - print_diagonal.
 * @n : the length.
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
int i;

for (i = 1; i <= 100 ; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else if (i % 3 == 0)
printf("Fizz ");
else
printf("%d ", i);
}
}
