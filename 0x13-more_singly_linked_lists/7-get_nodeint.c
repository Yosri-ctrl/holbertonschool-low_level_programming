#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: the head of the list
 * @index: the node searching for
 * Return: the data
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index; i++)
{
if (head->next == NULL)
return (NULL);
head = head->next;
}

return (head);
}
