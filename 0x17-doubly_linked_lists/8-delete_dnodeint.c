#include "lists.h"
/**
*delete_dnodeint_at_index - delete a node in index postion
*@head: the list to treat
*@index: index of the element looking for
*Return: the node
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pre, *node, *adv;
	unsigned int i = 0;

	node = *head;
	while (node != NULL && i != index)
	{
		pre = node;
		node = node->next;
		i++;
	}

	if (node == NULL)
		return (-1);

	adv = node->next;
	if (pre == NULL)
	{
		free(node);
		if (adv != NULL)
		{
			adv->prev = NULL;
			*head = adv;
		}
		else
			*head = NULL;
	}
	else if (adv == NULL)
	{
		pre->next = NULL;
		free(node);
	}
	else
	{
		pre->next = adv;
		adv->prev = pre;
		free(node);
	}

	return (1);
}