#include <stddef.h>

#include "function_pointers.h"

/**
* int_index - check the code
*@array: Pointer
*@size: Size of array
*@cmp: pointer to func
* Return: Always 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
	}
	return (-1);
}


