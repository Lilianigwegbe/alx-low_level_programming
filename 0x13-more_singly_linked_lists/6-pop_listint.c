/**
 * a function that deletes the head node of a listint_t linked list
 *
 * @head: A pointer to a pointer to the head node of the singly linked list.
 *
 * returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *tmp = *head;
listint_t *tmp2;
int n;
if (head == 0 || tmp == 0)
return (0);
tmp2 = tmp->next;
n = tmp->n;
free(tmp);
*head = tmp2;
return (n);
}

