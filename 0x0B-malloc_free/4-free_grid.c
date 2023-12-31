#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensional grid
 * @grid: array of integer
 * @height: height
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
