#include "main.h"

/**
 * flip_bits - returns the number of bits required to flip
 * to get from one number to another
 * @n: first int
 * @m: second int
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int len, diff;

	diff = 0;
	len = (sizeof(n) * 8);
	while (len--)
		diff += (n >> len & 1) != (m >> len & 1);
	return (diff);
}
