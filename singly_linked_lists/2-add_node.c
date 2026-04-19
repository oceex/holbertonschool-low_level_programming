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
int i = 0;
list_t *adding;
char *j;
adding = malloc(sizeof(list_t));
if (adding == NULL)
{
printf("Error\n");
free(adding);
return (NULL);
}
adding->next = NULL;
while (str[i] != '\0')
{
j[i] = str[i];
i++;
}
j[i] = '\0';
adding->len = i;
adding->str = j;
(*head)->next = adding;
return (adding);
}
