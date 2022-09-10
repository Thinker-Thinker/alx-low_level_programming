#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char l;

	char j;

	j = '0';

	l = 'a';

	while (j <= '9')
	{

		putchar(j);

		j++;

	}

	while (l < 'g')
	{

		putchar(l);

		l++;

	}

	putchar('\n');

	return (0);

}
