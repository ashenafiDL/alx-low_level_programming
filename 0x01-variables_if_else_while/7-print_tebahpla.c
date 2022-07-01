#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar(10);
	return (0);
}
