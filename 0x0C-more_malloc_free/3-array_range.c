#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: array[0]
 * @max: array[size - 1]
 * Return: *int
 */
int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	i = 0;
	j = min;
	while (j <= max)
	{
		arr[i] = j;
		j++;
		i++;
	}

	return (arr);
}
