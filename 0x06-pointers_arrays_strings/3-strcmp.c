#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if s1 and s2 are equal
 * negative number if s1 is less than s2
 * positive number if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, cmp;

	i = 0;
	cmp = 0;
	while (cmp == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		cmp = s1[i] - s2[i];
		i++;
	}

	return (cmp);
}
