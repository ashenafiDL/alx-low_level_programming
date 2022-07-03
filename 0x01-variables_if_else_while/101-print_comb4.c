#include <stdio.h>

/**
 * main - entry point of the prigram
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	i = 48;
	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != 55)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
