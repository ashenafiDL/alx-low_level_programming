#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all of its parameters
 * @n: the number of parameters
 * Return: the sum of all of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum, num;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);

	return (sum);
}
