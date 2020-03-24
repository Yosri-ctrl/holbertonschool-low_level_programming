#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - pop_listint
 * @head: the head of the list
 * Return: the data
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
