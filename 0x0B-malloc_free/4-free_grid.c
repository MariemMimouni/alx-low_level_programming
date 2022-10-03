#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2 dimentional grid
 * @grid: parameter1
 * @height : paramter2
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL && height != 0)
	{
		for (j = 0; j < height; j++)
			free(grid[j]);
		free(grid);
	}
}
