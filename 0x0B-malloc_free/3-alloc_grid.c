#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* alloc_grid - Entry point
*@width: integer character value of integer c
*@height: integer character value of integer c
* Return: Always 0 (Success)
*/
int **alloc_grid(int width, int height)
{
	int **a;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * (height));
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		a[i] = 0;
	}
	return (a);
}

