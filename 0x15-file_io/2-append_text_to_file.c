#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: ....
 * @text_content: ....
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, y;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	y = write(fd, text_content, strlen(text_content));
	if (y == -1 || y != strlen(text_content))
	{
		return (-1);
	}

	close(fd);

	return (1);
}
