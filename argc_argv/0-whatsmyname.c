#include <stdio.h>
/**
* main - funcion
* @argc: numero de argumentos pasados al prog.
* @argv: un array de strings conteniengo los argumentos pasados al prog.
* Return: 1.
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
