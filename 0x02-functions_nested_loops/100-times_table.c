#include "main.h"
/**
* print_number- Entry point
*@n: integer
* Return: Always 0 (Success)
*/

void print_number(int n)
{
	if (n < 10)
		_putchar(n +'0');
	if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n >= 100 && n <= 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
/**
* print_times_table - Entry point
*@n: integer
* Return: Always 0 (Success)
*/
void print_times_table(int n)
{
	int i; int j; int k;

	if (n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
					_putchar('0');
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					print_number(k);
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					print_number(k);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
			}
			_putchar('\n');
		}
	
	}
}
