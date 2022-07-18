#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
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

	printf("%d, %d\n", diagsum1, diagsum2);
}
