#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element
 * for which the cmp function does not return 0
 * otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
