#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
