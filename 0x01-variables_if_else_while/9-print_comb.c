#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 48;

	while (c <= 57)
	{
		putchar(c);
		putchar(44);
		putchar(32);
		c++;
	}
	return (0);
}
