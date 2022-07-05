#include "main.h"

/**
 * main - display times table of a number
 *
 * @n: the input number
 *
 * Return: 0
 */
int main(int n)
{
	int a, b, c;

	if (n > 15  || n < 0)
	{
		return;
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if ((c / 10) == 0)
				{
					if (b == 0)
					{
						_putchar('0');
					}
					else
					{
						_putchar(' ');
						_putchar((c % 10) + '0');
					}
				}
				else
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	return (0);
}
