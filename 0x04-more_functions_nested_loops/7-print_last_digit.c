#include "main.h"
/**
* print_last_digit - Entry point
*@i: integer
* Return: Always 0 (Success)
*/
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		i = i * -1;
	_putchar(i  + '0');
	return (i);
}

