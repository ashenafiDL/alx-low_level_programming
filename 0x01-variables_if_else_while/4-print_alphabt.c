#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		if (c == 101 || c == 113)
		{
			c++;
		}
		putchar(c);
		putchar(10);
		c++;
	}
	return (0);
}
