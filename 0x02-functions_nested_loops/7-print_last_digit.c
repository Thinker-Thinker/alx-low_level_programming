#include "main.h"
/**
* print_last_digit - Entry point
*@i: integer
* Return: Always 0 (Success)
*/
int print_last_digit(int i)
{
		if(i < 0)
			i = i * -1;

	i = i % 10;
	_putchar(i  + '0');
	return (i);
}

