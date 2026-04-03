#ifndef DOG_H
#define DOG_H
/**
  * struct dog - this stuct contains the dog info.
  * @name: the dog name.
  * @age: the dog age.
  * @owner: the dog's owner.
  *
  * Description: Longer description
  */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
