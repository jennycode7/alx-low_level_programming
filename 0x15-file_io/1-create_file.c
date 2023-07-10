#include "main.h"


/**
 * create_file - creates a file
 * @filename: ...
 * @text_content: ...
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int x;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	x = strlen(text_content);
	if (text_content != NULL)
	{
		write(fd, text_content, x);
	}

	close(fd);

	return (1);
}
