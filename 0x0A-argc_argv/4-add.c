#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum, c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	c = 1;
	for (c = 1; c < argc; c++)
	{
		for (i = 0; argv[c][i] != '\0'; i++)
		{
			if (!(isdigit(argv[c][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
