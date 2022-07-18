#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals0
 *
 * @a: the square matrix.
 * @size: the size of th ematrix
 */
void print_diagsums(int *a, int size)
{
	int i, diagsum1, diagsum2;

	diagsum1 = 0;
	diagsum2 = 0;
	for (i = 0; i < size; i++)
	{
		diagsum1 += a[i];
		diagsum2 += a[size - i - 1];
		a += size;
	}

	printf("%d, ", diagsum1);
	printf("%d\n", diagsum2);
}
