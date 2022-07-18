#include "main.h"

/**
 * _strstr -  locates a substring
 *
 * @haystack: the input string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *s = haystack;
		char *f = needle;

		while (*s == *f && *f != '\0')
		{
			s++;
			f++;
		}

		if (*f == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
