#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the doubly linked list
 * @n: Integer value to store in the new node
 *
 * Description:
 * Allocates a new dlistint_t node, initializes it with the given
 * integer, and appends it to the tail of the list. If the list is
 * empty, the new node becomes the head. The function correctly sets
 * the prev and next pointers to maintain the doubly linked structure.
 *
 * Return: Address of the new element, or NULL if memory allocation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *m;
m = malloc(sizeof(dlistint_t));
if (m == NULL)
return (NULL);
if (*head == NULL)
{
m->n = n;
m->next = NULL;
m->prev = NULL;
return (m);
}
while ((*head)->next != NULL)
*head = (*head)->next;
(*head)->next = m;
m->n = n;
m->prev = *head;
return (m);
}
