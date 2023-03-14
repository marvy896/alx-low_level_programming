#include "main.h"
#include <stdlib.h>
/**
 * ** alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grids;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);
	grids = malloc(height * sizeof(int *));
	if (grids == NULL)
	{
		free(grids);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grids[a] = malloc(width * sizeof(int));
		if (grids[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(grids[a]);
			free(grids);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			grids[a][b] = 0;
	return (grids);
}
