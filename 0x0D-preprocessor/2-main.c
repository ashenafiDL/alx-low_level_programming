#include <stdio.h>

/**
 * main - entry point of the programm
 * Return: always 0
 */
int main(void)
{
	char *s;

	s = __BASE_FILE__;
	printf("%s\n", s);
	return (0);
}
