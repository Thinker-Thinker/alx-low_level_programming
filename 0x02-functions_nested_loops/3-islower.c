#include "main.h"
/**
* _islower - Entry point
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{
	int c;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);		}
	return (0);

}

