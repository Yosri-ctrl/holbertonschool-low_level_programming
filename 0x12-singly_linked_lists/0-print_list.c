#include "lists.h"
/**
 * print_list - print the list givin
 * @h: the list to treat
 * Return: the size of the list
 **/
size_t print_list(const list_t *head)
{
    //const list_t *current = head;
    int nbr_node;

    for (nbr_node = 0; head != NULL;)
    {
        if (head->str == NULL)
        {
            printf("[0] (nil)\n");
            //printf("[%d] %s\n", head->next->len, head->next->str);
        }
        else
        {
            printf("[%d] %s\n", head->len, head->str);
            //printf("[%d] %s\n", head->next->len, head->next->str);
        }
        nbr_node++;
        head = head->next;
    }
    return (nbr_node);
}
