#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the inpu string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the input string
 */
void puts_half(char *str)
{
	int len, n;

	len = _strlen(str);
	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2) + 1;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
