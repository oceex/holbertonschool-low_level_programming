#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all data in a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 *
 * Description:
 * Iterates through a doubly linked list and adds the value stored in
 * each node. If the list is empty, the function returns 0.
 *
 * Return: The total sum of all node values
 */
int sum_dlistint(dlistint_t *head)
{
int x = 0;

while (head != NULL)
{
x += head->n;
head = head->next;
}
return (x);
}
