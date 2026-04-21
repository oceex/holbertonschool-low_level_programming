#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Double pointer to the head of the doubly linked list
 * @n: Integer value to store in the new node
 *
 * Description:
 * Allocates a new dlistint_t node, initializes it with the given
 * integer, and inserts it at the start of the list. The function
 * updates the head pointer and correctly sets the prev and next
 * pointers to maintain list integrity.
 *
 * Return: Address of the new element, or NULL if memory allocation fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *v;
v = malloc(sizeof(dlistint_t));
if (v == NULL)
return (NULL);
(*head)->prev = v;
v->n = n;
v->next = *head;
return (v);
}
