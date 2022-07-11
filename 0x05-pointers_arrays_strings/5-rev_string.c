#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the input string
 */
void rev_string(char *s)
{
	char first, last;
	int len, mid, i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	len = i - 1;
	mid = len / 2;
	while (mid >= 0)
	{
		fisrt = s[len - mid];
		last = s[mid];
		s[mid] = first;
		s[len - mid] = last;
		mid--;
	}
}
