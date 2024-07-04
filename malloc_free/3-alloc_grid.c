#include "main.h"
/**
 * **alloc_grid - Returns a pointer to a 2 dimensional array of ints
 * @width: Width of the matrix
 * @height: Height of the matrix
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int v1 = 0;
	int v2 = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc((height * sizeof(int *)));
	if (grid == NULL)
		return (NULL);

	while (v1 < height)
	{
		grid[v1] = malloc(width * sizeof(int));
		if (grid[v1] == NULL)
		{
			while (v2 < v1)
			{
				free(grid[v2]);
				v2++;
			}
			free(grid);
			return (NULL);
		}
		while (v2 < width)
		{
			grid[v1][v2] = 0;
			v2++;
		}
		v1++;
		v2 = 0;
	}
	return (grid);
}
