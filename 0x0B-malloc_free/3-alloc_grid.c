#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - create matrix of int using malloc
 * @width: width of matrix
 * @height: height of matrix
 * Return: pointer to matrix or null if failed to malloc it
*/
int **alloc_grid(int width, int height)
{
	int **g, i, j;

	g = malloc(height * sizeof(int *));

	if (!g)
		return (0);

	for (i = 0; i < height; i++)
	{
		g[i] = (int *)malloc(width * sizeof(int));

		if (!g[i])
			return (0);

		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}
