#include "variadic_functions.h"

/**
 * sum_them_all - sum all its paramater
 * @n: number of argument to be passed
 * Return: if n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list h;

	va_start(h, n);

	for (i = 0; i < n; i++)
		sum += va_arg(h, int);

	va_end(h);

	return (sum);
}
