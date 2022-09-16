#include "main.h"
#include <stdio.h>
/**
* print_numbers - Entry point
*@i: ineger
* Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ")
		printf("%i ", i);
	}
	printf("Buzz\n");
}

