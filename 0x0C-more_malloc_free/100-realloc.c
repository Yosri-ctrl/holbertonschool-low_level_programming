#include <stdlib.h>
#include "holberton.h"
/**
*_realloc - rellocate the memory
*@ptr: ptr
*@old_size: old_size
*@new_size: new_size
*Return: Always 0
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    int *a;

    if (new_size > old_size)
    {
        a = malloc(new_size);
        if (a == NULL)
        return (NULL);
        return (a);
    }

    if ( new_size == old_size)
    return (ptr);

    if (ptr == NULL)
    {
    a = malloc(new_size);
    return (a);
    }

    if (new_size == 0 && ptr != NULL)
    {
    free (ptr);
    return (NULL);
    }

    return (NULL);
}