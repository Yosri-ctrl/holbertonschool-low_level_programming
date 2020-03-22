#include "lists.h"
/**
 * list_len - print the length of the list
 * @h: the list to treat
 * Return: the length of the list
 **/
size_t list_len(const list_t *h)
{
int i;

for (i = 0; h->next != NULL;)
{
h = h->next;
i++;
}
return (i + 1);
}
