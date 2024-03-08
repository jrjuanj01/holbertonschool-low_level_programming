#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees height amount of arrays
 * @height: amount of arrays
 * @grid: pointer to grid
 * Return: Pointer to grid
 */
void free_grid(int **grid, int height)
{
	for (height -= 1; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
