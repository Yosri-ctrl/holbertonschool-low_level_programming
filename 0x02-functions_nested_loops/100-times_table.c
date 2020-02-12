#include "holberton.h"
/**
* print_times_table - Entry point
* @n : max number
* Return: Always 0 (success)
*/
void print_times_table(int n)
{
int i, j, k;

if (n < 0 || n > 0)
return;
else
{
for (i = 0; i <= n;)
{
for (j = 0; j <= n; j++)
{
if ((i * j) >= 100) /* more then 100 */
{
putchar((i * j) / 100 + '0');
putchar(((i * j) / 10 % 10) + '0');
putchar((i * j) % 10 + '0');
}
else if ((i * j) >= 10) /* more then 10 and less then 100 */
{
putchar(' ');
putchar((i * j) / 10 + '0');
putchar((i * j) % 10 + '0');
}
else if (j != 0) /* less the 10 */
{
putchar(' ');
putchar(' ');
putchar((i * j) + '0');
}
else
putchar((i * j) + '0');
if (j != n)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
i++;
}
}
}
}
