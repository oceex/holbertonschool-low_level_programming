#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a dlistint_t list
 * @head: Double pointer to the head of the doubly linked list
 * @index: The zero-based index of the node to delete
 *
 * Return: 1 on success, or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);

tmp = *head;

if (index == 0)
{
*head = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = NULL;
free(tmp);
return (1);
}

while (tmp != NULL && i < index)
{
tmp = tmp->next;
i++;
}

if (tmp == NULL)
return (-1);

if (tmp->next == NULL)
{
tmp->prev->next = NULL;
free(tmp);
return (1);
}

tmp->prev->next = tmp->next;
tmp->next->prev = tmp->prev;

free(tmp);
return (1);
}
