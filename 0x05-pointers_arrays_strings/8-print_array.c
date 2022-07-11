#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: the inpit array
 * @n: the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
			printf(", ");
		else
			printf("\n");

		i++;
	}
}
