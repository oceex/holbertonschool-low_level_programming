#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: This function prints the members of a struct dog.
 * If any member is NULL, the function prints "(nil)" instead.
 * If @d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
int i = 0;
void *k;
if (d == NULL)
return;
if (d->name == NULL)
k = "(nil)";
else
k = d->name;
printf("Name: %s/n", (char *)k);

printf("Age: %d/n", (float *)k);

if (d->owner == NULL)
k = "(nil)";
else
k = d->owner;
printf("Owner: %s", (char *)k);
}
