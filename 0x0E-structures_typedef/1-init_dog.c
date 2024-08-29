#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog to initialize.
 * @name: Pointer to a string representing the dog's name.
 * @age: The dog's age.
 * @owner: Pointer to a string representing the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

