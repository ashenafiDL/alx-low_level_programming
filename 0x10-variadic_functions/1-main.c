#include "variadic_functions.h"
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers(NULL, 2, 1, 3);
	return (0);
}
