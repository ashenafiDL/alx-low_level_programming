#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 48;

	while (c < 103)
	{
		if (c == 58)
			c = 97;
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
