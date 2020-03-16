#ifndef _VARIADIC_FUMCTIONS_H_
#define  _VARIADIC_FUMCTIONS_H_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

typedef struct forme
{
    char *c;
    void (*a)();
} forme;

void p_int(va_list a);
void p_char(va_list a);
void p_float(va_list a);
void p_string(va_list a);

#endif
