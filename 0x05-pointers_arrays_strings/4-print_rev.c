#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the input string
 * Return: the lenght of s
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
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the input string
 */
void print_rev(char *s)
{
	int len;

	len  = _strlen(s) - 1;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
}
