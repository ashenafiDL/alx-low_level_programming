#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 48;

	while (c < 103)
	{
		if (c == 58)
			c = 97;
		putchar(c);
		putchar(10);
		c++;
	}
	return (0);
}
