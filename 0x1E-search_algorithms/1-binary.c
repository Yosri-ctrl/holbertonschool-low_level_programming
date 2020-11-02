#include "search_algos.h"
/**
 * binary_search - search value in array.
 * @array: list to search in
 * @size: the size of the list
 * @value: value to search for in list
 * Return: index of the value in array
 */
int binary_search(int *array, size_t size, int value)
{
	return (result(array, 0, size - 1, value));
}

/**
* result - treat the array
 * @array: list to search in
 * @start: the size of the list
 * @end: the end of the array
 * @value: value to search for in list
 * Return: index of the value in array
*/
int result(int array[], int start, int end, int value)
{
	while (start <= end)
	{
		int m = start + (end - start) / 2, l = start;

		printf("Searching in array: ");
		for (; l <= end; l++)
		{
			printf("%d", array[l]);
			if (l < end)
				printf(", ");
		}
		printf("\n");

		if (array[m] == value)
			return (m);

		if (array[m] < value)
			start = m + 1;
		else
			end = m - 1;
	}
	return (-1);
}
