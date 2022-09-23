#include "main.h"
/**
* leet - Entry point
*@s: pointer
*
* Return: Always 0 (Success)
*/
char *leet(char *s)
{
	int i;
	int j;
	char alpha[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	i = 0;
	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == alpha[j])
				s[i] = num[j];
		}
					
		i++;
	}
	return (s);
}
