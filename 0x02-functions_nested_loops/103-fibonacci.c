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
	long int sum;

	i = 0;
	fib = 1;
	temp = 0;
	sum = 0;

	while (fib < 4000000)
	{
		temp = fib;
		fib = fib + i;
		if (fib % 2 == 0)
			sum = sum + fib;
		i = temp;
	}
	printf("%li\n", sum);
	return (0);
}

