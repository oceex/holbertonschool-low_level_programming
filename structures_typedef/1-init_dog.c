#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: This function assigns values to the members of
 * the struct dog pointed to by @d. If @d is NULL, the function
 * does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d.name = name;
d.age = age;
d.owner = owner;
}
