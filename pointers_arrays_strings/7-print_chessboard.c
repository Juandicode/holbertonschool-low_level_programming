#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: 2D array representing the chessboard, with 8 rows and 8 columns
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Recorre cada fila del tablero */
	for (i = 0; i < 8; i++)
	{
	/* Recorre cada columna en la fila actual */
	for (j = 0; j < 8; j++)
	{
	/* Imprime el carácter en la posición actu */
		_putchar(a[i][j]);
	}
	/* Imprime una nueva línea después de cada fila */
	_putchar('\n');
	}
}
