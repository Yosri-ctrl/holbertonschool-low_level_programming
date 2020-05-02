#include "lists.h"
/**
*add_dnodeint - add a node
*@h: the list to treat
*@n: the nbr to insert
*Return: the addres of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = *head;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;

	return (node);
}