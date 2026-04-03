#include "dog.h"
#include <stdio.h>

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *m;

m->name = name;
m->age = age;
m->owner = owner;
return (m);
}
