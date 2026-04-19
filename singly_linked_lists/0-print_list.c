#include "lists.h"

/**
 * print_list - Prints all elements of a linked list_t list
 * @h: Pointer to the head of the list
 *
 * Description:
 * This function iterates through a singly linked list of type list_t.
 * For each node, it prints the string stored in the node along with its
 * length. If the string is NULL, it prints "[0] (nil)" instead.
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
int i = 0;
list_t *k;
k = malloc(sizeof(list_t));
if (k == NULL)
{
printf("Error\n");
return (1);
}
k->str = h->str;
k->len = h->len;
k->next = h->next;
while (k != NULL)
{
if (k->str == NULL)
{
printf("[0] (nil)\n");
k = k->next;
n++;
continue;
}
printf("[%d] ", k->len);
for (i = 0; i < k->len; i++)
{
printf("%c", (k->str)[i]);
}
printf("\n");
k = k->next;
n++;
}
return (n);
}
