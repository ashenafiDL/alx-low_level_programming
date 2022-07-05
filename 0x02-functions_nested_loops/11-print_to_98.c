#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n upto 98
 *
 * @n: starting number
 */
void print_to_98(int n)
{
	printf("%d", n);
	if (n != 98)
	{
		putchar(',');
		putchar(' ');
	}
	n++;
}
