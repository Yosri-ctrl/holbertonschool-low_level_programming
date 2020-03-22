#include "lists.h"
/**
 * print_list - print the list givin
 * @h: the list to treat
 * Return: the size of the list
 **/
size_t list_len(const list_t *h)
{   
    int i;
    
    for(i = 0; h->next != NULL;)
    {
    h = h->next;
    i++;
    }
    return (i);
}