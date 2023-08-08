#include "main.h"

/**
 * create_file - creates a file
 * @filename: ...
 * @text_content: ...
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, y;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		y = write(fd, text_content, strlen(text_content));
		if (y == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (0);
}
