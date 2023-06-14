#include "main.h"

/**
 * free_grid - freees array
 * @grid: array to be freed
 * @height: ...
 */
void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
}
