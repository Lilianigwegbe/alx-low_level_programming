#include <stdio.h> 
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *                           in a linked list
 * @head:a pointer to a pointer to the head of the list
 * @idx:the index of the position where the new node
 *      will be inserted (starting at 0)
 * @n:the value of the new node to be inserted
 *
 * Return: a pointer to the newly inserted node or NULL if the function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp = *head;
unsigned int i;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = temp;
*head = new_node;
return (new_node);
}
for (i = 0; i < idx - 1; i++)
{
if (temp == NULL)
{
free(new_node);
return (NULL);
}
temp = temp->next;
}
if (temp == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}

