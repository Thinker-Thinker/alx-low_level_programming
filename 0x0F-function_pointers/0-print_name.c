#include "main.h"

#include <stdio.h>

#include <stdlib.h>



/**
* print_name - check the code
*@name: Pointer
*@f: pointer to func
* Return: Always 0.
*/
void print_name(char *name, void (*f)(char *));
{
	if (name != NULL && f != NULL)
		f(name);
}


