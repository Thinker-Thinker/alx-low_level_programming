#include "main.h"
/**
* print_triangle - Entry point
*@size: integer
* Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int j;
	int count;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (count = 1; count <= size; count++)
			{
				if (count <= (size - j))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
