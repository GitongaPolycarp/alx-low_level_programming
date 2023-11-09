#include "variadic_functions.h"

/**
 * print_all - function prints anything
 * @format: argument specifier
 * Return: any argument vector given based on format specifier
 */
void print_all(const char * const format, ...)
{
	va_list spc;
	unsigned int i = 0;
	char *str;
	char ch;
	float flt;
	int num;

	va_start(spc, format);
	while (format && format[i])
	{
		if (i > 0)
			printf(", ");
		switch (format[i])
		{
			case 'i':
				num = va_arg(spc, int);
				printf("%d", num);
				break;
			case 'f':
				flt = va_arg(spc, int);
				printf("%f", flt);
				break;
			case 'c':
				ch = va_arg(spc, int);
				printf("%c", ch);
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
		i++;
	}
	printf(" ");
	va_end(spc);
}
