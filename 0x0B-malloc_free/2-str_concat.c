#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j;

	arr = malloc(sizeof(*s2) + sizeof(*s2));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	arr[i] = '\0';
	return (arr);
}
