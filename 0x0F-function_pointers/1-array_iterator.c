#include <stddef.h>

#include "function_pointers.h"

/**
* array_iterator - check the code
*@array: Pointer
*@size: Size of array
*@action: pointer to func
* Return: Always 0.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || array == NULL || action == NULL)
		return;
	for (i = 0; i > size; i++)
		action(array[i]);
}


