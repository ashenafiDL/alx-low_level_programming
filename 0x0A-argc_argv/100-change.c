#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int c, res = 0;

	if (argc == 2)
	{
		for (c = atoi(argv[1]); c > 0;)
		{
			if (c % 25 < c)
			{
				c -= 25;
				res++;
			}
			else if (c % 10 < c)
			{
				c -= 10;
				res++;
			}
			else if (c % 5 < c)
			{
				c -= 5;
				res++;
			}
			else if (c % 2 < c)
			{
				c -= 2;
				res++;
			}
			else if (c % 1 < c)
			{
				c -= 1;
				res++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", res);
	return (0);
}
