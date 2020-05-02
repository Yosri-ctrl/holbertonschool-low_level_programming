#include "lists.h"
/**
*add_dnodeint_end - add a node at the end
*@head: the list to treat
*@n: the nbr to insert
*Return: the addres of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *pre;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	pre = *head;
	while (pre != NULL && pre->next)
		pre = pre->next;

	if (pre != NULL)
	{
		node->prev = pre;
		pre->next = node;
	}
	else
	{
		*head = node;
		node->prev = NULL;
	}
	node->n = n;
	node->next = NULL;
	return (node);
}
