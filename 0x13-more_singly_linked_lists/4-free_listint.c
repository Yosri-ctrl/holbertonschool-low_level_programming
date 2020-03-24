#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - add_nodeint_end
 * @head: the head of the list
 * @n: the int to insert
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