#include "lists.h"
/**
 * dlistint_len - Counts the number of elements in a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Description:
 * Traverses a doubly linked list of type dlistint_t and counts how
 * many nodes it contains. The function moves forward through the list
 * until it reaches NULL.
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
dlistint_t *x;
size_t k = 0;
if (h == NULL)
return (k);
x = malloc(sizeof(dlistint_t));
if (x == NULL)
return (98);
x->next = h->next;
while (x != NULL)
{
k++:
x = x->next;
}
return (k);
}
