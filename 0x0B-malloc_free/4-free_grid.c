#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the memory allocation
 * of a malloc 2D array
 *
 * @grid: input array
 *
 * @height: height of array
 *
 * Return: arr or NULL (Error)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (int i = 0; i < height; i++)
		free(grid[i]);
}
