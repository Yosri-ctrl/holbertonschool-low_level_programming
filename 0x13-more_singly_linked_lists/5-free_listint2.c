#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - free_listint virsion 2
 * @head: the head of the list
 **/
void free_listint2(listint_t **head)
{
listint_t *node;
//listint_t *next;

if (head == NULL)
return;

node = *head;
if (node != NULL)
{
    free(node);
    node = node->next;

}

*head = NULL;
}
