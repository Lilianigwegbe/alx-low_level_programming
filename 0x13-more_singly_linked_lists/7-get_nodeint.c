#include "lists.h"

/**
 * a function that returns the nth node of a listint_t linked list
 * @head: head pointer of singly linked list
 * @index: is the index of the node, starting at 0
 *
 * if node does not exist, return null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int size = 0;
if (head == 0)
return (0);
while (size < index)
{
if (head == 0)
return (0);
head = head->next;
size++;
}
return (head);
}
