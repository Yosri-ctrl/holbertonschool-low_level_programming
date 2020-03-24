#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free_listint
 * @head: the head of the list
 **/
void free_listint2(listint_t **head)
{
    listint_t *node;

    if (head == NULL)
    return;
    
    node = *head;
    if (node != NULL)
    {
        free(node->next);
        free(node);
    }

    *head = NULL;
}