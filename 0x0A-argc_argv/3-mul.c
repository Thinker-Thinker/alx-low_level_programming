#include <stdlib.h>
#include <stdio.h>
/**
* main - prints the name of the program
*@argc: number of arguments passed to the function
*@argv: argument vector of pointers to strings
*
* Return: always 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;
	int sum;

	sum = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i <= 2; i++)
		sum = sum * atoi(argv[i]);
	printf("%i\n", sum);
	return (0);

}
