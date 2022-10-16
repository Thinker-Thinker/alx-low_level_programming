#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - it does what it says on the bottle. (-_-)
*....: variadic variable
* Return: Always 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	int  i, sum;
	va_list list;

	va_start(list, n);
	if (n <= 0)
		return (sum);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
