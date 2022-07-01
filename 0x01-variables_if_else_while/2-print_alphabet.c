#include <stdio.h>

/**
 * main - entry point of the programm
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		putchar(c);
		putchar(10);
		c++;
	}
	return (0);
}
