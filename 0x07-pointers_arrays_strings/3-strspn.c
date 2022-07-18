#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the input string
 * @accept: the substring to be searched
 *
 * Return: length of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
			{
				count++;
			}
		}
	}

	return (count);
}
