#include "main.h"
/**
* puts_half - Entry point
*@str: pointer
* Return: Always 0 (Success)
*/
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		j = i / 2;
		for (; j <= i; j++)
		{
			_putchar(str[j - 1]);
		}
	}
	else
	{
		j = (i + 1) / 2;
		for (; j <= i; j++)
		{
			_putchar(str[j - 1]);
		}
	}
	_putchar('\n');
}

