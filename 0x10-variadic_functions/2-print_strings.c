#include "variadic_functions.h"

/**
 * print_strings - function prints strings
 * @separator: string to be printed
 * @n: number of strings passed to a function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	char *str;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(num, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
