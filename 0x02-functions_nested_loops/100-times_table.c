#include "main.h"
#include <stdio.h>
/**
* print_times_table - Entry point
*@n: integer
* Return: Always 0 (Success)
*/
void print_times_table(int n)
{
	int i;
	int j;
	int k;
	
	if (n >15)
		return;
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
					_putchar('0');
				else if (k >= 10 && k <= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(k / 100 + '0');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
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

