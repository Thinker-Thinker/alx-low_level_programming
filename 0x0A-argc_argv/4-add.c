#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
* main - prints the name of the program
*@argc: number of arguments passed to the function
*@argv: argument vector of pointers to strings
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int i, j;
	int sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]))
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);

}
