#include "main.h"
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	float i;
	float fib;
	float temp;
	float count;

	i = 0;
	fib = 1;
	temp = 0;
	count = 1;
	while (count < 98)
	{
		temp = fib;
		fib = fib + i;
		printf("%f, ", fib);
		i = temp;
		count++;
	}
	printf("%f\n", fib);
	return (0);
}

