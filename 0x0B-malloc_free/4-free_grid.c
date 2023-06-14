#include "main.h"

void free_grid(int **grid, int height)
{
	while(height--)
	{
		free(grid[height]);
	}
	free(grid);
}
