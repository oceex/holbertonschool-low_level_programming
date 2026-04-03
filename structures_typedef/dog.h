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
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
