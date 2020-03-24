#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - sum_listint
 * @head: the head of the list
 * Return: the sum
 **/
int sum_listint(listint_t *head)
{
int count = 0;

while (head->next != NULL)
{
count += head->n;
head = head->next;
}
count += head->n;

return (count);
}
