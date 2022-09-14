#include "main.h"
#include <stdio.h>
#define N 1000000000000000
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long i; fib; temp; count; i1; i2; fib1; fib2; temp1; temp2;

	i = 0;
	fib = 1;
	temp = 0;
	count = 1;
	while (count < 93)
	{
		temp = fib;
		fib = fib + i;
		printf("%lu, ", fib);
		i = temp;
		count++;
	}
	i1 = i / N;
	i2 = i % N;
	fib1 = fib / N;
	fib2 = fib % N;
	temp1 = temp / N;
	temp2 = temp % N;
	while (count >= 93 && count < 98)
	{
		temp1 = fib1;
		temp2 = fib2;
		fib1 = fib1 + i1 + (fib2 + i2) / N;
		fib2 = (fib2 + i2) % N;
		printf("%lu%lu, ", fib1, fib2);
		i1 = temp1;
		i2 = temp2;
		count++;
	}
	printf("%lu%lu\n", (fib1 + i1 + (fib2 + i2) / N), (fib2 + i2) % N;
	return (0);
}

