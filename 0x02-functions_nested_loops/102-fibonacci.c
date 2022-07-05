#include <stdio.h>
#include "main.h"

/**
 * main - display first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int n[50];
	long int i;

	n[0] = 1;
	n[1] = 2;
	for (i = 0; i <= 49; i++)
	{
		if (i == 0 || i == 1)
		{
			printf("%ld", n[i]);
		}
		else
		{
			n[i] = n[i - 1] + n[i - 2];
			printf("%ld", n[i]);
		}
		if (i != 50)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
