#include "main.h"
#include <stdio.h>
/**
* reverse_array - Entry point
*@n: integer
*@a: pointer
* Return: Always 0 (Success)
*/
void reverse_array(int *a, int n)
{
	int j;
	int str;

	for (j = 0; j < n / 2; j++)
	{
		str = *(a + j);
		*(a + j) = *(a + (n - j - 1));
		*(a + (n - j - 1)) = str;
	}
}


