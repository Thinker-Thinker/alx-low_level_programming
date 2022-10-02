#include <stdlib.h>
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
	int cent;
	int sum;

	sum = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	cent = atoi(argv[1]);
	if (cent <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		while (cent >= 25)
		{
			cent = cent - 25;
			sum++;
		}	
		while (cent >= 10)
		{
			cent = cent - 10;
			sum++;
		}	
		while (cent >= 5)
		{
			cent = cent - 5;
			sum++;
		}
		while (cent >= 2)
		{
			cent = cent - 2;
			sum++;
		}
		while (cent >= 1)
		{
			cent = cent - 1;
			sum++;
		}
		printf("%i\n", sum);
		return (0);
	}
}
