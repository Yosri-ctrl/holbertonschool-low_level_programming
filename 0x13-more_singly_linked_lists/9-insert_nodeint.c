#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - sum_listint
 * @head: the head of the list
 * Return: the sum
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    //listint_t *node;
    listint_t *new;
    unsigned int i;

    new = *head;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    return (NULL);
    new->n = n;

    for (i = 0; i != idx; i++)
    {
        new = new->next;
        if (!new)
		{
			free(new);
			return (NULL);
		}
    }

    *head = new;
    return (*head);
}