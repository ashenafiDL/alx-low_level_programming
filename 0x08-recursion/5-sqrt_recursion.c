#include "main.h"

/**
 * _sqrt_recursion - calculates sqrt
 * @n: the input number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - finds sqrt
 * @n: the input number
 * @i: iterator
 * Return: natural square root of n or -1
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);

	return (_sqrt(n, i + 1));
}
