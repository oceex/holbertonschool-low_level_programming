#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a dlistint_t list
 * @head: Double pointer to the head of the doubly linked list
 * @index: The zero-based index of the node to delete
 *
 * Description:
 * Removes the node located at the specified index from a doubly linked list.
 * If the index is out of range, the list is empty, or deletion fails, the
 * function returns -1. On success, the function adjusts surrounding node
 * pointers and returns 1.
 *
 * Return: 1 on success, or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *t;
if (*head == NULL || head == NULL)
return (-1);
t = *head;
if (index == 0)
{
(*head)->next->prev = NULL;
free(head);
return (1);
}
while (t != NULL && i < index - 1)
{
t = t->next;
i++;
}
if (t == NULL)
return (-1);
if (t->next == NULL)
{
*head = t->next;
t->next = NULL;
free(*head);
return (1);
}
*head = t->next;
t->next = (*head)->next;
t = t->next->next;
t->prev = (*head)->prev;
free(*head);
return (1);
}
