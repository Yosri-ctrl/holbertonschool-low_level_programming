#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add_node
 * @head: the list to treat
 * @str: the str to add
 * Return: the pointer to next node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    list_t *c;
    int i;



    for (i = 0; str[i] != '\0'; i++)
    ;

    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        free(new);
        return (NULL);
    }

    new->str = strdup(str);
    new->len = i;
    new->next = NULL;

    

    c->next = new;
    return (*head);
}