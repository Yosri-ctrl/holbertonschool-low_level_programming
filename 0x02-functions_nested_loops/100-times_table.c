
#include "holberton.h"
/**
* print_times_table - Entry point
* @n : max number
* Return: Always 0 (success)
*/
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
return;
else
{
for (i = 0 ; i <= n ; i++)
{
for (j = 0 ; j <= n ; j++)
{
if (i * j < 10) /* for numbers less then 10*/
{
_putchar(i * j + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
if (i * (j + 1) < 10)
{
_putchar(' ');
_putchar(' ');
}
else
_putchar(' ');
}
}
else if ((i * j) < 100 && (i * j) >= 10) /* for numbers between 10 and 100 */
{
_putchar(i * j / 10 + '0');
_putchar(i * j % 10 + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
if (i * (j + 1) < 100)
_putchar(' ');
}
}
else /* for numbers greater then 100 */
{
_putchar(i * j / 100 + '0');
_putchar((i * j / 10) % 10 + '0');
_putchar(i * j % 10 + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
}
