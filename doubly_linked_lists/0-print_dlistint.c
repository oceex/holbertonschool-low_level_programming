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
while (h->next != NULL)
{
printf("%d\n", h->n);
k++;
}
return (k);
}
