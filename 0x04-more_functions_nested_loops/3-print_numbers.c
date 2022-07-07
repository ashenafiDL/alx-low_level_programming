#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	int d;

	d = 48;
	while (d <= 57)
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
