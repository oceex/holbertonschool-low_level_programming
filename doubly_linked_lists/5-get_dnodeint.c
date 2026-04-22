#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a given index
 * @head: Pointer to the head of the doubly linked list
 * @index: The zero-based index of the node to retrieve
 *
 * Description:
 * Traverses a doubly linked list and returns the address of the node
 * located at the specified index. If the index is out of range or the
 * list is empty, the function returns NULL.
 *
 * Return: Pointer to the node at the given index, or NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x = 0;
while (x < index && head->next != NULL)
{
head = head->next;
x++;
}
if (x == index)
return (head);
else
return (NULL);
}
