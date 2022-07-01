#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 122;

	while (c >= 97)
	{
		putchar(c);
		putchar(10);
		c--;
	}
	return (0);
}
