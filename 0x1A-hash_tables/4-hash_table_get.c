#include "hash_tables.h"
/**
*hash_table_get -  retrieves a value associated with a key
*@ht: the hash table
*@key: the key looking for
*Return: Return 1 if succees
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];

	if (node == NULL)
		return (NULL);

	while (strcmp(node->key, key) != 0)
		node = node->next;

	if (node == NULL)
		return (NULL);

	return (node->value);
}
