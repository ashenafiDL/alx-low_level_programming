#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string - binary number
 * Return: the converted number
 * or 0 if error ocures
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	ui = 0;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			ui += (1 << (len - i - 1));
		else if (b[i] != '0')
			return (0);
	}

	return (ui);
}

/**
 * _strlen - finds the lenght of a string
 * @str: string
 * Return: length of str
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
