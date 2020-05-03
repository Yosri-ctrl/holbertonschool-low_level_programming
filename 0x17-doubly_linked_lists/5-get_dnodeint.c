#include "lists.h"
/**
*get_dnodeint_at_index - free a list
*@head: the list to treat
*@index: index of the element looking for
*Return: the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count = 0;

	node = head;
	while (node)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;
	}
	return (NULL);
}
