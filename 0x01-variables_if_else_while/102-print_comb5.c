#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if ((10 * k + l) > (10 * i + j))
					{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (j == '8' && i == '9' && k == '9' && l == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
		}
	}
	putchar('\n');
	return (0);

}
