#include "main.h"

/**
 * clear_bit - sets the value of a bit
 * @n: pointer to the number
 * @index: position to change bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
