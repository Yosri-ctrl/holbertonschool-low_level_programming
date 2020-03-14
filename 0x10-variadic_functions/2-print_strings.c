#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -print strs
 * @separator: ", "
 * @n: nmb og str
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list a;
    unsigned int i;

    
    va_start(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%s", va_arg(a, char*));
        if(separator != NULL)
        if(i != n - 1)
        printf("%s", separator);
    }
    va_end(a);
    printf("\n");
}