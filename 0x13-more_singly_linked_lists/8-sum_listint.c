#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a singly linked list
 * @head: pointer to the head of singly linked list
 *
 * Return:sum of all the data (n) of a singly linked list, and 0 if empty
 */
int sum_listint(listint_t *head)
{
int add = 0;
if (head == 0)
return (0);
while (head != 0)
{
add += head->n;
head = head->next;
}
return (add);
}
