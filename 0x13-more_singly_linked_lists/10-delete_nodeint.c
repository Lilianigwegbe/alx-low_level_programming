#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given index
 *                           of a linked list
 *
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted (starting at 0)
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *prev = NULL;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
return (1);
}
tmp = *head;
for (i = 0; tmp != NULL && i < index; i++)
{
prev = tmp;
tmp = tmp->next;
}
if (tmp == NULL)
return (-1);
prev->next = tmp->next;
free(tmp);
return (1);
}


