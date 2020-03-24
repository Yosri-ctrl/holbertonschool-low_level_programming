#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free_listint
 * @head: the head of the list
 * Return: the pointer to the next node
 **/
void free_listint(listint_t *head)
{
while (head != NULL)
{
free(head->next);
free(head);
head = head->next;
}
}
