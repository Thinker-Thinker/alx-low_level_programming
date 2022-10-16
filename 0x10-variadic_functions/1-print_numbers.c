#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - it does what it says on the bottle. (-_-)
*@separator: separates number
*@n: no of variadic variable
* Return: Always 0.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int  i;
	va_list list;

	va_start(list, n);
	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		printf("%i", va_arg(list, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(list, int));
	va_end(list);
}
