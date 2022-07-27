#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free grids
 * @grid: grid to be considered
 * @height: row of height
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height, i++)
	{
		free(grid[i]);
	}
	free(grid);
}
