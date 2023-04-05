#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the head of the list
 * @n: number that represents the value  the new node
 *
 * Return: the address of the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new_node, *last_node;

        /* Provide memory for the new node */
        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
                return (NULL);

        /* Create the new node */
        new_node->n = n;
        new_node->next = NULL;

        /* If the list is empty, the new node becomes the head */
        if (*head == NULL) {
                *head = new_node;
                return (new_node);
        }

        /* If the above does not apply, find the last node in the list */
        last_node = *head;
        while (last_node->next != NULL)
                last_node = last_node->next;

        /* Add the new node to the end of the list */
        last_node->next = new_node;
        return (new_node);
}

