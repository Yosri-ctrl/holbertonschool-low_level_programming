#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - return th sum of the arguments
 * @n: one of the arguments
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list a;
int s = 0;
unsigned int i;

if (n == 0)
return (0);

va_start(a, n);
for (i = 0; i < n; i++)
s += va_arg(a, int);
va_end(a);
return (s);
}
