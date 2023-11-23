#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num = n ^ m;

	while (num > 0)
	{
		if (num & 1)
		{
			count++;
		}
		num >>= 1;
	}

	return (count);
}
