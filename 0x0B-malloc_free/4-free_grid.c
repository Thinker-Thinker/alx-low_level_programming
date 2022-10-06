#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_grid - Entry point
*@grid: pointer character value of integer c
*@height: integer character value of integer c
* Return: Always 0 (Success)
*/
void free_grid(int **grid, int height);
{
	int **a;
	int i, j;

	if (grid == NULL || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}


	free(grid);
}

