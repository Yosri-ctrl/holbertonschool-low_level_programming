#include "hash_tables.h"
/**
*hash_table_set -  adds an element to the hash table
*@ht: the hash table
*@key: the key looking for
*@value: value to add
*Return: Return 1 if succees
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *node;
	unsigned long int i;

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	if (node != NULL)
	{
		while (node)
		{
			if (strcmp(node->key, key) == 0)
			{
				node->value = strdup(value);
				return (1);
			}
			node = node->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[i] != NULL)
		new->next = ht->array[i];

	ht->array[i] = new;
	return (1);
}
