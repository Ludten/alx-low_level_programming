#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - create an 2D array with malloc
 *
 * @width: width of array
 *
 * @height: height of array
 *
 * Return: arr or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	arr = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);

}
