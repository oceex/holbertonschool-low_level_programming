#include "dog.h"
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, m;
dog_t *k;
k = malloc(sizeof(dog_t));
if (k == NULL)
return (NULL);
if ((name == NULL) || (owner == NULL))
return (NULL);
while (name[i] != '\0')
i++;
while (owner[j] != '\0')
j++;
k->name = malloc(sizeof(char) * (i + 1));
if (k->name == NULL)
{
free(k);
return (NULL);
}
k->owner = malloc(j + 1);
k->owner = malloc(sizeof(char) * (j + 1));
if (k->owner == NULL)
{
free (k->name);
free(k);
return (NULL);
}
for (m = 0; m < i; m++)
k->name[m] = name[m];
k->name[m] = '\0';
for (m = 0; m < j; m++)
k->owner[m] = owner[i];
k->owner[m] = '\0';
k->age = age;
return (k);
}
