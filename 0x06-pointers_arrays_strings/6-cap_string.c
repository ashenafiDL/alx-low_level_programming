#include "main.h"

/**
 * is_lower - checks is a character is lowercase or not
 * @ch: the input character
 * Return: 1 is ch is lowercase
 * 0 otherwise
 */
int is_lower(char ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;

	if (is_lower(str[0]))
	{
		str[0] -= 32;
	}

	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '.') && is_lower(str[i + 1]))
		{
			str[i + 1] -= 32;
		}
		i++;
	}

	return (str);
}
