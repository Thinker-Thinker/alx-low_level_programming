#include "main.h"

/**
* print_number - Entry point
*@n:integer
* Return: Always 0 (Success)
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n >= 10000)
		_putchar((n % 100000) / 10000 + '0');
	if (n >= 1000)
		_putchar((n % 10000) / 1000 + '0');
	if (n >= 100)
		_putchar((n % 1000) / 100 + '0');
	if (n >= 10)
		_putchar((n % 100) / 10 + '0');
	_putchar(n % 10 + '0');
}

