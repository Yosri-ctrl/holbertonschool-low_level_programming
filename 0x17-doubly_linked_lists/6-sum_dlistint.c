#include "lists.h"
/**
*sum_dlistint - add all data
*@head: the list to treat
*Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}