#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size == 0)
		_putchar('\n');

	j = size;
	while (j > 0)
	{
		i = size;
		while (i > 0)
		{
			_putchar('#');
			i--;
		}
		_putchar('\n');
		j--;
	}
}
