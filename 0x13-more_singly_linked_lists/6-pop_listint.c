#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - free_listint virsion 2
 * @head: the head of the list
 **/
int pop_listint(listint_t **head)
{
    listint_t *node;
    int n;

    node = *head;
    if (*head != NULL)
    {
        n = node->n;
        *head = node->next;
        free(node);
    }
    else
    {
        n = 0;
    }
    
    return (n);
}