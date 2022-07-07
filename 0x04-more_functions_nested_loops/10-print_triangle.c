#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	j = size;
	while (j > 0)
	{
		i = j - 1;
		k = j - 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}

		while (k < size)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		j--;
	}
}
