#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 97;

	while (c != 91)
	{
		if (c == 123)
			c = 65;
		putchar(c);
		putchar(10);
		c++;
	}
	return (0);
}
