#include "function_pointers.h"

/**
 * int_index - function searches an integer
 * @size: array size
 * @array: target array
 * @cmp: function pointer to compare search integer
 * Return: int element match, -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
