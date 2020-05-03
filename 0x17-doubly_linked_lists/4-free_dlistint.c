#include "lists.h"
/**
*free_dlistint - free a list
*@head: the list to treat
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head->prev)
		head = head->prev;
	node = head;
	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);	
	}
}
