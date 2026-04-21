#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list - Singly linked list node
 * @str: String stored in the node (malloc'ed string)
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 *
 * Description:
 * This structure defines a node of a singly linked list. Each node
 * contains a dynamically allocated string, its length, and a pointer
 * to the next node in the list.
 */
typedef struct list
{
char *str;
int len;
struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
