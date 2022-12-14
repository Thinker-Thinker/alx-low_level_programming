#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_string - it do what it says on the bottle. (-_-)
*@list: separates number
* Return: Always 0.
*/
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);

}

/**
* print_integer - it does what it says on the bottle. (-_-)
*@list: se
* Return: Always 0.
*/
void print_integer(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
* print_float - it does what it says on the bottle. (-_-)
*@list: separates numbe
* Return: Always 0.
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
* print_char - it does what it says on the bottle. (-_-)
*@list: separates num
* Return: Always 0.
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
* print_all - it does what it says on the bottle. (-_-)
*@format: format
* Return: Always 0.
*/
void print_all(const char * const format, ...)
{
	unsigned int  i, j;
	va_list list;
	char *str;
	p_opt ops[] = {
		{"s", print_string},
		{"i", print_integer},
		{"f", print_float},
		{"c", print_char}
	};

	j = i = 0;
	str = "";
	va_start(list, format);
	while (format[i] && format)
	{
		while (j < 4)
		{
			if (*(ops[j].t) == format[i])
			{
				printf("%s", str);
				ops[j].f(list);
				str = ", ";
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(list);
	printf("\n");
}
