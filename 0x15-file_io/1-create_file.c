#include "main.h"

/**
 * create_file - creates a file
 * @filename: ...
 * @text_content: ....
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);

	return (1);
}
