#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: size
 * @new_size: new size
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		n = malloc(new_size);

		if (n == NULL)
			return (NULL);
		return (n);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	n = malloc(new_size);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		n[i] = ((char *) ptr[i];
	}
	free(ptr);
	return (n);
}
