#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list - Doubly linked list node
 * @prev: Pointer to the prev node in the list.
 * @n: the data of the node.
 * @next: Pointer to the next node in the list.
 *
 * Description:
 * This structure defines a node of a singly linked list. Each node
 * contains a dynamically allocated string, its length, and a pointer
 * to the next node in the list.
 */
typedef struct list
{
int n;
struct list *prev;
struct list *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif
