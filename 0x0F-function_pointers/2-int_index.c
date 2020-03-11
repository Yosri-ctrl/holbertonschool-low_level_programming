#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that executes a function
 * @array: the array
 * @size : the size
 * @cmp : the fct to print
 * Return:  index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);

if (array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
