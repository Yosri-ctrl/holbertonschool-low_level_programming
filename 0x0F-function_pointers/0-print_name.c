#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the name to print
 * 
 */
void print_name(char *name, void (*f)(char *))
{
    void (*a)(char *);
    a = *f;
    a(name);
}