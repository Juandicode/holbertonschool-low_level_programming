#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
*
* @filename: the name of the file to be read.
*
* @letters: the number of letters to be printed from the file.
*
* Return: the number of characters read and printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ol;
	int openn;
	ssize_t rd, wr;

	if (!filename || letters == 0)
	{
		return (0);
	}
	ol = malloc(sizeof(char) * letters);
	if (!ol)
	{
		return (0);
	}
	openn = open(filename, O_RDONLY);
	if (openn == -1)
	{
		free(ol);
		return (0);
	}
	rd = read(openn, ol, letters);
	if (rd == -1)
	{
		free(ol);
		close(openn);
		return (0);
	}
	wr = write(STDOUT_FILENO, ol, rd);
	if (wr == -1)
	{
		free(ol);
		close(openn);
		return (0);
	}
	free(ol);
	close(openn);

	return (rd);
}
