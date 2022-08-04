#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @arg: character
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints int
 * @arg: integer
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints float
 * @arg: float
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_str - prints str
 * @arg: string
 */
void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep;
	va_list list;
	printTypeStruct printType[5];

	sep = "";
	printType[0].type = "i";
	printType[0].printer = print_int;
	printType[1].type = "f";
	printType[1].printer = print_float;
	printType[2].type = "c";
	printType[2].printer = print_char;
	printType[3].type = "s";
	printType[3].printer = print_str;
	printType[4].type = NULL;
	printType[4].printer = NULL;

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", sep);
				printType[j].printer(list);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
