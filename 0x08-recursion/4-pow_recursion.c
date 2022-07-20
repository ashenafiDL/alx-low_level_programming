#include "main.h"

/**
 * _pow_recursion - calculates power
 * @x: base number
 * @y: power number
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	y--;
	return (x * _pow_recursion(x, y));
}
