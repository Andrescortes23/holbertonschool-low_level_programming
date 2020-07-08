#include <stdlib.h>
/**
 *free_grid - set free 2 dimensional grid
 *@grid: array bidimensional
 *@height: size
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
