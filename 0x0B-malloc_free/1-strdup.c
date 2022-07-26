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
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	for (; str[i] != '\0'; i++)
		;

	arr = malloc(i * sizeof(*str) + 1);
	if (arr == 0)
		return (NULL);

	j = 0;
	while (j < i)
	{
		arr[j] = str[j];
		j++;
	}
	return (arr);
}
