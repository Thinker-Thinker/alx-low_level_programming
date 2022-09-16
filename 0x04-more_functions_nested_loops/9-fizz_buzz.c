#include <stdio.h>
#include "main.h"
/**
*main - Entry point
*a: integer
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;

	for (a = 1; a <= 99; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else
			printf("%i ", a);
	}
	printf("Buzz\n");
	return (0);
}
