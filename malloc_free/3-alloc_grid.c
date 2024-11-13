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
	/* si no se puede reservar memoriapara el array de filas, RN */
	if (!grid)
		return (NULL);

	while (i < height)
	{
		/* reservar memoria pal array d ints */
		grid[i] = malloc(width * sizeof(int));
		/*si no se peude asignar memoria para una fil, rn */
		if (!grid[i])
		{
			/* desasignar las filas ya creadas */
			while (i-- > 0)
				free(grid[i]);
			/* liberar el puntero de grid */
		/*	free(grid);*/
		/*	return (NULL); */
		}
		/* inicializo todos los valores de la fila en 0 */
		j = 0;
		while (j < width)
			grid[i][j++] = 0;
		/* mover a la fila siguiente */
		i++;
	}
	/* retorna el puntero grid */
	return (grid);
}
