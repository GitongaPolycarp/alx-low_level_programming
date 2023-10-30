#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to arrays of integer
 * @width: with of the array
 * @height: height of the array
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	k = malloc(height * sizeof(int *));
	if (k == NULL)
	{
		free(k);
		return(NULL);
	}
	for (i = 0; i < height; i++)
	{
		k[i] = malloc(width * sizeof(int));
		if (k[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(k[i]);
			free(k);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			k[i][j] = 0;
	return (k);
}
