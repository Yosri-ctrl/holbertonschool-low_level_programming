#include "hash_tables.h"
/**
*hash_table_create - Creat a new node
*@size: the size of the array
*Return: A pointer to the new table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *head;
    unsigned long int i;

    head = malloc(sizeof(hash_table_t));
    head->array = malloc(sizeof(hash_table_t) * size);

    for (i = 0; i < size; i++)
        head->array[i] = NULL;
    return (head);
}

