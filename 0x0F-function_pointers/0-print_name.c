#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: the name to print
 * @f : calling the either print_name_as_is or print_name_uppercase
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
void (*a)(char *);
a = *f;
a(name);
}
}
