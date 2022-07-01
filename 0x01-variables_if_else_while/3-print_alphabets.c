#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 97;

	while (c != 91)
	{
		if (c == 123)
			c = 65;
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
