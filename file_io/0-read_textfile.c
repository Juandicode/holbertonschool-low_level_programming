#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function
 * @filename: file
 * @letters: letters
 * Return: count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i = 0, contar = 0;
	char *buffer;

	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}
	contar = read(i, buffer, letters);
	contar = write(STDOUT_FILENO, buffer, contar);
	close(i);
	free(buffer);
	return (contar);
}
