#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - free_list
 * @head: the list to treat
 **/
void free_list(list_t *head)
{
if (head != NULL)
{
free_list(head->next);
free(head->str);
free(head);
}
else
return;
}