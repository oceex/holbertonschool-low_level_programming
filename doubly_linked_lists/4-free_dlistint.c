#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t doubly linked list
 * @head: Pointer to the head of the list
 *
 * Description:
 * Iterates through a doubly linked list of type dlistint_t and frees
 * each node. The function moves forward through the list, releasing
 * memory for every node until the end of the list is reached.
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
if (head == NULL)
return;
while (head != NULL)
{
temp = head->next;
free(head->next);
free(head->prev);
free(head);
head = temp;
}
}
