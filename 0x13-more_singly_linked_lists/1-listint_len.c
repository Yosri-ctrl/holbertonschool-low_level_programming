#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print_listint
 * @h: the head of the list
 * Return: the nbr of nodes in the list
 **/
size_t listint_len(const listint_t *h)
{
    size_t count;

    for (count = 0; h != NULL; count++)
    h = h->next;
    return (count);
}