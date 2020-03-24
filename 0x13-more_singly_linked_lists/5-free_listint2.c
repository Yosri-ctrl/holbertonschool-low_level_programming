#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free_listint
 * @head: the head of the list
 **/
void free_listint2(listint_t **head)
{
    if (head == NULL)
    return;
    else
    *head = NULL;
}