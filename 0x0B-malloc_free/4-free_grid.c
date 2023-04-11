#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free matrix of int created using malloc
 * @grid: matrix of int
 * @height: height of matrix
*/
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
