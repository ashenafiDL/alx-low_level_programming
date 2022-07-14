#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the input string
 * Return: a pointer to the modified string
 */
char *leet(char *s)
{
	int c, i;
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int nums[] = {52, 51, 48, 55, 49};

	c = 0;
	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == upper[i] || s[c] == lower[i])
			{
				s[c] = nums[i];
			}
		}
		c++;
	}

	return (s);
}
