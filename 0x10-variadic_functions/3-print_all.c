#include "variadic_functions.h"

/**
 * print_all - function prints anything
 * i@format: argument specifier
 * Return: any argument vector given based on format specifier
 */
void print_all(const char * const format, ...)
{
	int i, check_stat = 0;

	char *str;
	va_list num;

	va_start(num, format);
	
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(num, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(num, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(num, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(num, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(num);
}
