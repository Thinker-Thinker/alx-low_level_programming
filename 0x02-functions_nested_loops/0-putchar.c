#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char *text;
	int i;

	text = "_putchar\n";
	for (i = 0; i <= 8; i++)
	{
		putchar(text[i]);
	}
	return (0);
}
