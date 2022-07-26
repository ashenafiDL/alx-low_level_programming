#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: string
 * Return: char*
 */
char *_strdup(char *str)
{
	char *arr;
	int i;

	arr = malloc(sizeof(*str));
	if (arr == NULL || str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}

	arr[i] = '\0';
	return (arr);
}
