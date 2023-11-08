#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns sum two numbers
 * @a: first number
 * @b: second number
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

