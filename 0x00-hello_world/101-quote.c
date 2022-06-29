#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point of programm
 *
 * Return: always 1 (successful)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	return (1);
}
