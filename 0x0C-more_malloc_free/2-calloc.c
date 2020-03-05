#include <stdlib.h>
#include "holberton.h"
/**
*_calloc - concatenate two strs
*@nmemb : the
*@size : size
*Return: Always 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    int *a;

    if (nmemb == 0 || size == 0)
    return (NULL);

    a = malloc(nmemb * size);
    if (a == NULL)
    return (NULL);

    return (a);
}