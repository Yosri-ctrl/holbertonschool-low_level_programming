#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print list of nbms
 * @separator: ", "
 * @n: the nmb
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list a;
unsigned int i;

va_start(a, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(a, int));
if (separator != NULL)
{
if (i != n - 1)
printf("%s", separator);
}
}
va_end(a);
printf("\n");
}
