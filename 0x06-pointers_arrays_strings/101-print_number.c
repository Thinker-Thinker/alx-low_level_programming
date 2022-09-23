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
	if (n >= 1000000000)
		_putchar((n % 10000000000) / 1000000000 + '0');
	if (n >= 100000000)
		_putchar((n % 1000000000) / 100000000 + '0');
	if (n >= 10000000)
		_putchar((n % 100000000) / 10000000 + '0');
	if (n >= 1000000)
		_putchar((n % 10000000) / 1000000 + '0');
	if (n >= 100000)
		_putchar((n % 1000000) / 100000 + '0');
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

