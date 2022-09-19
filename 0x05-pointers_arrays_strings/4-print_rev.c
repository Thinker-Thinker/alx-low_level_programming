#include "main.h"
/**
* print_rev - Entry point
*@s: pointer
* Return: Always 0 (Success)
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (; s[i - 1] != '\0'; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}

