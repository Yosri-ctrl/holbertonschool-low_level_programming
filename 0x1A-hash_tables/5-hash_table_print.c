#include "hash_tables.h"
/**
*hash_table_print -  print a hash table
*@ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int check;

	putchar('{');
	for (i = 0, check = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			if (check == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			while ((node = node->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", node->key, node->value);
			}
			check = 1;
		}
	}

	putchar('}');
	putchar('\n');
}
