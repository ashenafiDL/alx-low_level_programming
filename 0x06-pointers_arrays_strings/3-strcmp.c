#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if s1 and s2 are equal
 * -15 if s1 is less than s2
 *  15 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	else
	{
		for (i = 0; i <= j; i++)
		{
			if (s1[i] < s2[i])
			{
				return (-15);
			}
			else if (s1[i] > s2[i])
			{
				return (15);
			}
		}
	}

	return (0);
}
