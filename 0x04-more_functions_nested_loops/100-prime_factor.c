#include <stdio.h>
#include <math.h>

/**
 * main - entry point of the program
 * Return: always 0
 */
int main(void)
{
	long max, i, n;

	n = 612852475143;
	max = 2;
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
			max = i;
		}
	}
	if (n > 2)
		max = n;
	printf("%ld\n", max);
	return (0);
}
