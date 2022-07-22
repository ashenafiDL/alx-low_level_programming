#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the number to be checked
 * Return: 1 if c is a digit
 * 0 oherwise
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
