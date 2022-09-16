#include "main.h"

/**
* print_triangle - Entry point
*@size: integer
* Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int i;
	int j;
	int count;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (count = 1; count <= (size - j); count++)
			{
				_putchar(' ');
			}
			for (i = 1; i <= j; i++)
			{
				_putchar('#');
			}
		
		}
	}
}
