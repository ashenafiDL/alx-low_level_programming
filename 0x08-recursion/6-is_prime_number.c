#include "main.h"

/**
 * is_prime_number - checks if a number is prime or not
 * @n: the input number
 * Return: 1 if n is prime 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (_prime(n, i));
}

/**
 * _prime - checks if a number is prime or not
 * @n: the input number
 * @i: iterator
 * Return: 1 if n is prime 0 otherwise
 */
int _prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);

	return (_prime(n, i + 1));
}
