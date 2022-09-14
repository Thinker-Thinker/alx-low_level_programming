#include <stdio.h>
#include "main.h"
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

	if (n >15 )
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
				printf("0");

				else if (k >= 10 && k < 100)
					printf(",  %i", k);

				else if (k >= 100)
					printf(", %i", k);
				else
					printf(",   %i", k);
			}
			_putchar('\n');
		}
	
	}
}

