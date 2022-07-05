#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n upto 98
 *
 * @n: starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n >= 98)
			n++;
		else
			n--;
		putchar(',');
		putchar(' ');
	}
	printf("%d", 98);
	putchar('\n');
}
