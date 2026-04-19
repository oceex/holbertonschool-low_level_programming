#include "lists.h"
/**
 * list_len - Counts the number of elements in a linked list_t list
 * @h: Pointer to the head of the list
 *
 * Description:
 * This function traverses a singly linked list of type list_t and
 * counts how many nodes it contains. It moves through the list one
 * node at a time until it reaches NULL.
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
size_t n = 0;
list_t *k;
k = malloc(sizeof(list_t));
k->next = h->next;
while (k != NULL)
{
n++;
k = k->next;
}
return (n);
}
