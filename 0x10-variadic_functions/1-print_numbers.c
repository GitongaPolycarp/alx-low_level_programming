#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers
 * @n: integer
 * @separator: string to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;

	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(num, const unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
