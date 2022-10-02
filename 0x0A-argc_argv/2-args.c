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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);

}
