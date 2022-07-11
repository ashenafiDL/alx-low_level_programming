#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the input string
 */
void rev_string(char *s)
{
	char temp[sizeof(s) + 1];
	int len, i;

	i = 0;
	/* copy the value of s to tempotary string */
	while (s[i] != '\0')
	{
		temp[i] = s[i];
		i++;
	}

	i = 0;
	len = sizeof(s);
	while (len >= 0)
	{
		s[i] = temp[len];
		len--;
		i++;
	}
}
