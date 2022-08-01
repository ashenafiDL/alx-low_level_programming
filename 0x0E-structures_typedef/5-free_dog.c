#include "main.h"
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: dog structure
 */
void free_dog(dog_t *d)
{
	free(d);
}
