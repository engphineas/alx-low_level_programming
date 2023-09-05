#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - funtion frees 2dimension array
 * @grid: 2D
 * @height: height of grid
 * Return: void or nothing
 *
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
