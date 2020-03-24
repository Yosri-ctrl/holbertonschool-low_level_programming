#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - add_nodeint
 * @head: the head of the list
 * @n: the int to insert
 * Return: the pointer to the next node
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;
    listint_t *node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (*head);
    }

    node = *head;
    while (node->next != NULL)
        node = node->next;
    node->next = new_node;

    return (*head);
}