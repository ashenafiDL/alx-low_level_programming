#include <stdio.h>
#include "main.h"

/**
 * first_50_fibonacci - display first 50 fibonacci numbers
 */
void first_50_fibonacci(void)
{
	int n[50];
	int i;

	n[0] = 1;
	n[1] = 2;

	for (i = 0; i <= 50; i++)
	{
		if (i == 0 || i == 1)
		{
			printf("%d", n[i]);
		}
		else
		{
			n[i] = n[i-1] + n[i-2];
			printf("%d", n[i]);
		}
		if (i != 50)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
