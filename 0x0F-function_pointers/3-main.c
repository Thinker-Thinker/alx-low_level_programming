#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"



/**
* main - prints a num as is
*@argc: number of argument
*@argv: array
* Return: integer.
*/
int main(int argc, char *argv[])
{
	int a, b, c, f;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = get_op_func(argv[2]);
	c = atoi(argv[3]);

	if (b == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (!(strcmp(argv[2], "/") || strcmp(argv[2], "%") &&
	!(strcmp(argv[2], "0")
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2])(a, c);
	printf("%i\n", f);
	return (0);

}
