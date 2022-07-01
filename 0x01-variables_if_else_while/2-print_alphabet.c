#include <stdio.h>

/**
 * main - entry point of the programm
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
