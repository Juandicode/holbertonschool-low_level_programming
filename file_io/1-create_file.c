#include "main.h"
/**
 * create_file - function
 * @filename: filename
 * @text_content: text cont
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int i;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
		write(i, text_content, strlen(text_content));
	close(i);
	return (1);
}
