#include "main.h"
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int i;
	long int fib;
	long int temp;
	int count;

	i = 0;
	fib = 1;
	temp = 0;
	count = 1;
	while (count < 98)
	{
		temp = fib;
		fib = fib + i;
		if (fib >= 100000000000000000000)
		{
			printf("%li%li, ", fib / 100000000000000000000, fib % 100000000000000000000);
		}
		else
			printf("%li, ", fib);
		i = temp;
		count++;
	}
	printf("%li%li\n", fib / 100000000000000000000, fib % 100000000000000000000);
	return (0);
}

