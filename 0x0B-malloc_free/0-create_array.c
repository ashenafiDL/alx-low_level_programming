#include "main.h"
#include <stdlib.h>

/**
 * create_array - create a array object
 * @size: size of array
 * @c: character
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
