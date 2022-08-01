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
	int name_len, owner_len;
	struct dog *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	name_len = length(name);
	new->name = malloc(sizeof(char) * name_len + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = name;
	owner_len = length(owner);
	new->owner = malloc(sizeof(char) * owner_len + 1);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->owner = owner;
	new->age = age;

	return (new);

	return (new);
}

/**
 * length - calculates strung length
 * @s: string
 * Return: length of s
 */
int length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
