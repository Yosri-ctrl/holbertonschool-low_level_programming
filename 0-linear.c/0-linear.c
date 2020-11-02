#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - search value in array.
 * @array: list to search in
 * @size: the size of the list
 * @value: value to search for in list
 * Return: index of the value in array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}