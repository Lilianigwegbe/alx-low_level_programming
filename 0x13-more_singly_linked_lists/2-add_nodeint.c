#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a singly linked list
 * @head: pointer to head of singly linked list
 * @n: number to add as new node in the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(*new_node));
if (new_node == NULL)
return NULL;
new_node->n = n;
new_node->next = *head;
*head = new_node;
return new_node;
}

