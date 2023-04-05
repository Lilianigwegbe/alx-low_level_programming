#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees the memory occupied by a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: No return value.
 */
void free_listint2(listint_t **head)
{
listint_t *current;
if (!head)
return;
while (*head)
{
current = *head;
*head = current->next;
free(current);
}
}

