#include "lists.h"
/**
 * free_list - frees a list_t linked list
 * @head: pointer to the head of the list
 *
 * Description:
 * This function iterates through a singly linked list of type list_t
 * and frees each node. It also frees the string stored in each node
 * before freeing the node itself.
 */
void free_list(list_t *head)
{
list_t *eren;
while (head != NULL)
{
eren = head->next;
free(head->str);
free(head);
head = eren;
}
free(head->str);
free(head);
}
