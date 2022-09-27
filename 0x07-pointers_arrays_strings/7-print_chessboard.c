#include "main.h"

/**
* print_chessboard - Entry point
*@a: pointer

* Return: Always 0 (Success)
*/
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (j < 8)
	{
		while (i < 8)
		{
			_putchar(a[i][j]);
			i++;
		}
		_putchar('\n');
		j++;
}
