#include "main.h"
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int fib;
	int temp;
	int count;

	i = 0;
	fib = 1;
	temp = 0;
	count = 1;
	while (count < 98)
	{
		temp = fib;
		fib = fib + i;
		printf("%i, ", fib);
		i = temp;
		count++;
	}
	printf("%i\n", fib + i);
	return (0);
}

