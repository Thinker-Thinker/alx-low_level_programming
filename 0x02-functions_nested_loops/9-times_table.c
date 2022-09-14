#include "main.h"
/**
* jack_bauer - Entry point
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			if (i != 9 && j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}
}

