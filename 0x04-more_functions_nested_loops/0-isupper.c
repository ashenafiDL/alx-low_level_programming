#include "main.h"

/**
 * _issupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase.
 * 0 otherwise
 */

int _issupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
