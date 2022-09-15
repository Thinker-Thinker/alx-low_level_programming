#include "main.h"
/**
* more_numbers - Entry point
*
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			_putchar(i + '0');
		}
		_putchar('\n');
	}
_putchar('\n');
}

