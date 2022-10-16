#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - it does what it says on the bottle. (-_-)
*@separator: separates number
*@n: no of variadic variable
* Return: Always 0.
*/
void print_strings(const char *separator, const unsigned int n, ...)
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
		printf("%s", va_arg(list, char *) == NULL ? "nil": va_arg(list, char *));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%s", va_arg(list, char *) == NULL ? "nil": va_arg(list, char *));
	va_end(list);
}
