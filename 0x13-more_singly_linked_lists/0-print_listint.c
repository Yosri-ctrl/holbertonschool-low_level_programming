#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print_listint
 * @h: the head of the list
 * Return: the nbr of nodes in the list
 **/
size_t print_listint(const listint_t *h)
{
size_t count;

for (count = 0; h != NULL; count++)
{
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
