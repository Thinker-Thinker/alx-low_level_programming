#include "main.h"
/**
* _puts - Entry point
*@n: pointer
* Return: Always 0 (Success)
*/
void _puts(char *str)
{
	int i;

	for ( i=0; str[i] != '\0'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

