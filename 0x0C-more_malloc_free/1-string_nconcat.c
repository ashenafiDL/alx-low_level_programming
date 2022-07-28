#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;

	return (size);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: *char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i;
	char *ptr;

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (n >= size2)
		n = size2;

	ptr = malloc((size1 + n) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < (size1 + n))
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
