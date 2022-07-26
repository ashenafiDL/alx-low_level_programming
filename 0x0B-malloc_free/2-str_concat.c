#include "main.h"
#include <stdlib.h>

/**
 * size - length of string
 * @s: string
 * Return: lenght of s
 */
int size(char *s)
{
	int i;

	i = 0;
	for (; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int size1, size2, i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = size(s1);
	size2 = size(s2);

	arr = malloc((size1 + size2) * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i <= size1 + size2)
	{
		if (i < size1)
			arr[i] = s1[i];
		else
			arr[i] = s2[i - size1];
		i++;
	}

	arr[i] = '\0';
	return (arr);
}
