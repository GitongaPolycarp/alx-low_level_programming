#include "main.h"

/**
 * print_binary - prints binary representation of a number.
 * @n: pointer
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	print_binary(n >> 1);
	_putchar(n & 1 ? '1' : '0');
}
