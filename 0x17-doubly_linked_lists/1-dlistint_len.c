#include "lists.h"
/**
*dlistint_len - count the number of element of a list
*@h: the list to treat
*Return: the number of the nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	int count = 0;

	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}
