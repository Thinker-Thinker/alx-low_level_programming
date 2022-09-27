#include "main.h"
#include <stdio.h>
/**
* print_diagsums - Entry point
*@a: pointer
*@size: integer
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
	int i, j, k, l, m, n;

	k = 0;
	l = 0;
	m = 0;
	n = 0;
	for (j = 0; j < size; j++)
	{
		k = (size * j) + j;
		m += a[k];

	}
	for (i = 0; i < size; i++)
	{
		l = (size * i) + (size - 1 - i);
		n += a[l];
	}
	printf("%i %i\n", m, n);
}
