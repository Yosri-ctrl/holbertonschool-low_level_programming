#include "lists.h"
/**
*dlistint_len - count the number of element of a list
*@h: the list to treat
*Return: the number of the nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	int count;

	if (node->next == NULL)
		return (1);

	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}
