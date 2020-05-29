#include "hash_tables.h"
/**
*key_index - Creat a new node
*@size: the size of the array
*@key: the key looking for
*Return: A pointer to the new table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	const unsigned char i;

	i = hash_djb2(key) % size;
	return (i);
}
