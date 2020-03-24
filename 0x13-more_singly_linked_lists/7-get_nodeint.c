#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - pop_listint
 * @head: the head of the list
 * Return: the data
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;

    for (i = 0; i < index; i++)
    {
        if (head == NULL)
        return;
        head = head->next;
    }

    return (head);
}