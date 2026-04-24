#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t doubly linked list
 * @head: Pointer to the head of the list
 *
 * Description:
 * Frees all nodes of a doubly linked list by iterating forward
 * from the head and releasing each node's memory.
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}

