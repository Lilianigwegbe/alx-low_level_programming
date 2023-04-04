#include <stdio.h>
#include "lists.h"


/** A function that prints all the elements of a singly linked list
 * @h: pointer to the head of list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}

