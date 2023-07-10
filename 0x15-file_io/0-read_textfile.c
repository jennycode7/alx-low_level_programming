#include "main.h"

/**
 * read_textfile - reads file
 * @filename: ...
 * @letters: ...
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int x;
	char *str;


	str = malloc(sizeof(char *) * letters);
	if (str == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
	{
		return (0);
	}

	x = read(fd, str, letters);

	write(STDOUT_FILENO, str, letters);

	free(str);
	close(fd);

	return (x);
}
