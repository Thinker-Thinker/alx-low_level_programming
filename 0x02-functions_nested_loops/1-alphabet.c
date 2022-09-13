#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}

/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)

{

	print_alphabet();

	return (0);

}
