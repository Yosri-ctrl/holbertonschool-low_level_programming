#ifndef _VARIADIC_FUMCTIONS_H_
#define  _VARIADIC_FUMCTIONS_H_
#include <stdarg.h>

void _printint(va_list a);
void _printchar(va_list a);
void _printfloat(va_list a);
void _printstring(va_list a)
typedef struct st
{
char *c;
void (*a)();
} form;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif
