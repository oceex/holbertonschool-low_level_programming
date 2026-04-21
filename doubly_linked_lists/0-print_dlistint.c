#include "lists.h"
/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Description:
 * Iterates through a doubly linked list of type dlistint_t.
 * For each node, it prints the integer stored in the node.
 *
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t k = 0;
dlistint_t *x;
x = malloc(sizeof(dlistint_t));
if (x == NULL)
return (98);
x->next = h->next;
x->prev = h->prev;
x->n = h->n;

while (x->next != NULL)
{
printf("%d\n", x->n);
k++;
x = x->next;
}
return (k);
}
