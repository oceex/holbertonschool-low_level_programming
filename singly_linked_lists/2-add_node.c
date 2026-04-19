#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the linked list
 * @str: String to be duplicated and stored in the new node
 *
 * Description:
 * This function allocates memory for a new list_t node, duplicates
 * the provided string, and initializes the node's fields. The new
 * node is inserted at the beginning of the linked list, and the head
 * pointer is updated to point to the new node.
 *
 * Return: Address of the new element, or NULL if memory allocation fails
 */
list_t *add_node(list_t **head, const char *str)
{
int len = 0, i = 0;
list_t *adding;
adding = malloc(sizeof(list_t));
if (adding == NULL)
{
printf("Error\n");
return (NULL);
}
head->next = adding;
adding->str = str;
adding->next = NULL;
while (str[i] != '\0')
len++;
adding->len = len;
return (adding);
}
