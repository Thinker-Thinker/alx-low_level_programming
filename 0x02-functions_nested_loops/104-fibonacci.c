#include "main.h"
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long i;
unsigned long fib;
	unsigned long temp;
	unsigned long count;

	i = 0;
	fib = 1;
	temp = 0;
	count = 1;
	while (count < 98)
	{
		temp = fib;
		fib = fib + i;
		printf("%lu, ", fib);
		i = temp;
		count++;
	}
	printf("%lu\n", fib + i);
	return (0);
}

