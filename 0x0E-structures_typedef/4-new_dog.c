#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
