#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char *l;
	int i;

	l = "_putchar\n";
	for (i = 0; i <= 8; i++)
	{
		_putchar(l[i]);
	}
	return (0);
}
