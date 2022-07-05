#include <stdio.h>
#include "main.h"

/**
 * even_fibonacci - sum of even fibonacci numbers
 */
void even_fibonacci(void)
{
	int n[50];
	int i, sum = 3;

	n[0] = 1;
	n[1] = 2;

	for (i = 2; i <= 50; i++)
	{
		n[i] = n[i - 1] + n[i - 2];
		if (n[i] > 4000000)
			break;
		if (n[i] % 2 == 0)
			sum += n[i];
		printf("%d", sum);
		printf("\n");
	}
}
