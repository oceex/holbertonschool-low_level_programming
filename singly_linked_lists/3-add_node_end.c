#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
char *k;
int i = 0;
list_t *x, *b = *head;
k = strdup(str);
if (k == NULL)
return (NULL);
x = malloc(sizeof(list_t));
if (x == NULL)
{
free(k);
return (NULL);
}
while (str[i] != '\0')
i++;
x->len = i;
x->str = k;
while (b->next != NULL)
b = b->next;
b->next = x;
x->next = NULL;
return (x);
}
