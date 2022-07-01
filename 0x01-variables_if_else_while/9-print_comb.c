#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	c = 48;

	while (c <= 57)
	{
		putchar(c);
		if (c < 57)
		{
			putchar(44);
			putchar(32);
		}
		c++;
	}
	putchar(10);
	return (0);
}
