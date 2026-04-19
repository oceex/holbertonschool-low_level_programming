#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
typedef struct list {
char *str;
int len;
list_t *next;
} list_t;

size_t print_list(const list_t *h);
#endif
