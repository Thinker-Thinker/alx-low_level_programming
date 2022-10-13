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
	b = atoi(argv[2]);
	c = atoi(argv[3]);

/*	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}*/
	if ((b == '/' || b == '%') && b == '0')
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2])(a, c);
	printf("%i\n", f);
	return (0);

}
