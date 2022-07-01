#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
