#include "main.h"

/**
 * read_textfile - read text file
 * @filename: ...
 * @letters: ...
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t x, y;
	char *buffer;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	x = read(fd, buffer, letters);
	if (x == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	y = write(STDOUT_FILENO, buffer, x);
	if (y == -1 || y != x)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (y);
}
