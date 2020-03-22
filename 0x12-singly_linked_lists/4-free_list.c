#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - free_list
 * @head: the list to treat
 **/
void free_list(list_t *head)
{
    list_t *list;
    list_t *c;
    c = head;
    while (c != NULL)
    {
        list = c->next;
        free(c->str);

        c = list;       
    }
}