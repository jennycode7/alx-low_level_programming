#include "main.h"
/**
 * alloc_grid - allocates memory
 * @width: width
 * @height: height
 * Return: returns grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y, i, wc;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(char *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
	}
	for (wc = 0; wc < i; wc++)
	{
		if (grid[wc] == NULL)
		{
			free(grid[wc]);
			return (NULL);
		}
	}

	x = 0;
	while (x < height)
	{
		y = 0;
		while (y < width)
		{
			grid[x][y] = 0;
			y++;
		}
		x++;
	}
	return (grid);
}
