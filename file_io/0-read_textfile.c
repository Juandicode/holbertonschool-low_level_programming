#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Lee un archivo de texto y lo imprime en la salida estándar
 * @filename: Nombre del archivo
 * @letters: Número de letras a leer e imprimir
 * Return: Número de letras leídas e impresas, o 0 en caso de error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytes_read, bytes_written, total_written = 0;
    char *buffer;

    if (!filename)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (!buffer)
    {
        close(fd);
        return (0);
    }

    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    while (total_written < bytes_read)
    {
        bytes_written = write(STDOUT_FILENO, buffer + total_written, bytes_read - total_written);
        if (bytes_written == -1)
        {
            free(buffer);
            close(fd);
            return (0);
        }
        total_written += bytes_written;
    }

    free(buffer);
    close(fd);
    return (total_written);
}

