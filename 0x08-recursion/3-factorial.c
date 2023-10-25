#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n: factor
 * Return: factorial n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
