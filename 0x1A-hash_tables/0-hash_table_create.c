#include "hash_tables.h"
/**
*hash_table_create - Creat a new node
*@size: the size of the array
*Return: A pointer to the new table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;
	unsigned long int i = 0;

	head = malloc(sizeof(hash_table_t) * 1);
	if (head == NULL)
		return NULL;

	head->array = malloc(sizeof(hash_table_t *) * size);
	if (head->array == NULL)
	{
		free(head);
		return NULL;
	}

	for (; i < size; i++)
		head->array[i] = NULL;

	return (head);
}

