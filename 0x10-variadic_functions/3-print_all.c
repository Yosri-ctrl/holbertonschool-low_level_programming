#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
*print_all - print every thing 
*@format : the format of the input
*/
void print_all(const char * const format, ...)
{
    forme forms[] ={
        {"c", p_char},
        {"i", p_int},
        {"f", p_float},
        {"s", p_string}
    };

    va_list a;
    unsigned int i, j;
    char *s;

    va_start(a, format);
    s = "";
    i = 0;
    while (format[i] != '\0')
    {
        j = 0;
        while (j < 4)
        {
            if (format[i] == *forms[j].c)
            {   
                printf("%s", s);
                forms[j].fun(a);
                s = ", ";
            }
            j++;
        }
        i++;
    }
    printf("\n");
    va_end(a);
}




void p_int(va_list a)
{
    printf("%d", va_arg(a, int));
}
void p_char(va_list a)
{
    printf("%c", va_arg(a, int));
}
void p_float(va_list a)
{
    printf("%f", va_arg(a, double));
}
void p_string(va_list a)
{
    char *str;
    str = va_arg(a, char *);
    if (str == NULL)
        str = "(nil)";
    printf("%s", str);
}
