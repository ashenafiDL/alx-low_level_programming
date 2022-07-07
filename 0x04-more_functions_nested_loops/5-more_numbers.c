#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 */
void more_numbers(void)
{
	int a, b;

	a = 1;
	while (a <= 14)
	{
		b = 48;
		while (b <= 62)
		{
			switch (b)
			{
				case 58:
					_putchar(49);
					_putchar(49);
					break;
				case 59:
					_putchar(49);
					_putchar(49);
					break;
				case 60:
					_putchar(49);
					_putchar(50);
					break;
				case 61:
					_putchar(49);
					_putchar(51);
					break;
				case 62:
					_putchar(49);
					_putchar(52);
					break;
				default:
					_putchar(b);
			}
			b++;
		}
		a++;
		_putchar('\n');
	}
}
