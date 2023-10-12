#include "main.h"

/**
 * more_numbers - prints 10x the  numbers from 0 to 14
 * void _putchar(char c)
 * Return: always 0
 */

void more_numbers(void)
{
	int _putchar(char c);
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 0)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
