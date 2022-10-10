#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* array_range - Entry point
*@min:minimum character value of integer c
*@max: maximum character
* Return: Always 0 (Success)
*/
int *array_range(int min, int max)
{
	int *a;
	int i, j;

	if (max < min)
		return (NULL);
	j = max - min + 1;
	a = malloc(sizeof(int) * j);
	if (a == NULL)
		return (NULL);
	for (i = 0; min + i < j; i++)
		a[i] = min + i;
	return (a);
}

