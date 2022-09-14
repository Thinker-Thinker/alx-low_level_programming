#include "main.h"
/**
* times_table - Entry point
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
	int i;
	int j;
	int k;
	int count1;
	int count2;

	for (i = 0; i <= count1; i++)
	{
		for (j = 0; j <= count2; j++)
		{
			k = i * j;
			if (j == 0)
				_putchar('0');
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar('\n');

	}
}

