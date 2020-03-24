#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - add_nodeint
 * @head: the head of the list
 * @n: the int to insert
 * Return: the pointer to the next node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = *head;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;


*head = new_node;
return (*head);
}
