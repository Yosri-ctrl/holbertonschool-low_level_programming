#include "lists.h"
/**
*print_dlistint - print the element of a list
*@h: the list to treat
*Return: the number of the nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	int i = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		i++;
	}
	return (i);
}
