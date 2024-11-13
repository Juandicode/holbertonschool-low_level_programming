#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees the matrix previously made
 * @grid: Pointer to a pointer
 * @height: Height 
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
