#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char d;

	c = 48;
	while (c <= 57)
	{
		d = c + 1;
		while (d <= 57)
		{
			putchar(c);
			putchar(d);
			if (c != 56)
			putchar(44);
			putchar(32);
			d++;
		}
		c++;
	}
	putchar(10);
	return (0);
}
