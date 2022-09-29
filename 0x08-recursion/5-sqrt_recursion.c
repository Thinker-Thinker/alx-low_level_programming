#include "main.h"
/**
*sqrt_calc- Entry point
*@n: integer
@j: integer
* Return: Always 0 (Success)
*/
int sqrt_calc(int n, int j)
{
	if (j * j == n)
		return (j);
	sqrt_calc(n, j + 1)
		
}
/**
*_sqrt_recursion - Entry point
*@n: pointer
* Return: Always 0 (Success)
*/
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_calc(n, 1);

}
