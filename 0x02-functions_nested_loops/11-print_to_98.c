#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Entry point
*@n: integer
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
	 	while (n <= 98)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else 
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	_putchar('\n');
	return (0);
}

