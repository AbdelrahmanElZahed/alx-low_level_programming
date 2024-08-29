#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner */
	new_name = malloc(strlen(name) + 1);
	new_owner = malloc(strlen(owner) + 1);
	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(new_dog);
		return (NULL);
	}

	/* Copy name and owner to the allocated memory */
	strcpy(new_name, name);
	strcpy(new_owner, owner);

	/* Initialize the new dog's properties */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}

