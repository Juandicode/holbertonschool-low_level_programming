#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - return a pointer to a 2dimensional array
 * @width: width variable
 * @height: heigt variable
 * Return: 0
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i])
		{
			while (i-- > 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
			grid[i][j++] = 0;
		i++;
	}
	return (grid);
}
