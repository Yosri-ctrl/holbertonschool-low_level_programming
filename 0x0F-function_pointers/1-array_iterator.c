#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that executes a function
 * @array: the array
 * @size : the size
 * @action : 
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
    size_t i;

    for (i = 0; i < size; i++)
    action(array[i]);
}