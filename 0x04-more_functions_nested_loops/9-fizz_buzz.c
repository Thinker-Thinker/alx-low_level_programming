#include <stdio.h>
/**
* main - Entry point
*@i: ineger
* Return: Always 0 (Success)
*/
void main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else
			printf("%i ", i);
	}
	printf("Buzz\n");
}

