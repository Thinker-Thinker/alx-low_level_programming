#include <stdio.h>

/**
* main - Entry point
*@a: integer
* Return: Always 0 (Success)
*/

void main(void)
{
	int a;

	for (a = 1; a <= 99; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
			printf("Fizz ");
		else if (a % 5 == 0 && a % 3 != 0)
			printf("Buzz ");
		else if (a % 5 == 0 && a % 3 == 0)
			printf("FizzBuzz ");
		else
			printf("%i ", a);
	}
	printf("Buzz\n");
}
