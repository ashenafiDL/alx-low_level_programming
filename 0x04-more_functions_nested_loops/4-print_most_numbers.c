#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * except 2 and 4
 */
void print_most_numbers(void)
{
	int d;

	d = 48;
	while (d <= 57)
	{
		if (d == 50 && d == 52)
			d++;
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
