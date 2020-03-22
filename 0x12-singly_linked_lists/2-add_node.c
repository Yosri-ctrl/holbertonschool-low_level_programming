#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add_node
 * @head: the list to treat
 * @str: the str to add
 * Return: the pointer to next node
 **/
list_t *add_node(list_t **head, const char *str)
{
int i;
list_t *new_head;

new_head = malloc(sizeof(list_t));
if (new_head == NULL)
{
free(new_head);
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
;

new_head->str = strdup(str);
new_head->len = i;
new_head->next = *head;

*head = new_head;
return (*head);
}
