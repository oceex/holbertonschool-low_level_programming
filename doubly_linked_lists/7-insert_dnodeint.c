#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a node at a given index in a list
 * @h: Double pointer to the head of the doubly linked list
 * @idx: Index where the new node should be inserted
 * @n: Integer value to store in the new node
 *
 * Description:
 * Inserts a new node in a dlistint_t list at the specified index. If
 * idx is 0, the node is added at the beginning. If idx is beyond the
 * list length, the function returns NULL.
 *
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *x, *temp;
if (idx == 0)
return (add_dnodeint(h, n));
temp = *h;
while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}
if (temp == NULL)
return (NULL);
if (temp->next == NULL)
return (add_dnodeint_end(h, n));
x = malloc(sizeof(dlistint_t));
if (x == NULL)
return (NULL);
x->n = n;
x->next = temp->next;
x->prev = temp;
temp->next->prev = x;
temp->next = x;
return (x);
}
