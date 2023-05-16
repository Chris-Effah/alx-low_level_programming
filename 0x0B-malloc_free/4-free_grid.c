#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees space alocated to a grid
 * @grid: grid of two dimemsional array
 * @height: height of grid
 * Return: a pointer to a 2 dimensional array of integers.
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
