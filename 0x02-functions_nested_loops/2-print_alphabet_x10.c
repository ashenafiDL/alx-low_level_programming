#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Retrun: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 1;
	while (i <= 10)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
