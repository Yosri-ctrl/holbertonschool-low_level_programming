#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: the head of the list
 * @index: the node searching for
 * Return: the data
 **/
int sum_listint(listint_t *head)
{
    int count = 0;

    while (head->next != NULL)
    {
        count += head->n;
        head = head->next;
    }
    count += head->n;

    return (count);
}