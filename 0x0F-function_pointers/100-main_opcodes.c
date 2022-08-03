#include <stdio.h>
#include <stdlib.h>

/**
 * print - print opcodes of main
 * @a: address of main
 * @n: number of bytes
 */
void print(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < (n - 1))
			printf(" ");
	}
	printf("\n");
}

/**
 * main - entry pont of the programm
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print((char *)&main, n);
	return (0);
}
