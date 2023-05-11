#include "main.h"


/**
 * read_textfile - reads and prints text file
 * @filename: file to be read
 * @letters: number of letters to be read and printed
 * Returns: returns 0 on error and number of letters on success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x, y;
	char *buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		return (0);
	}

	if (!filename)
	{
		return (0);
	}

	x = open(filename, O_RDONLY, 0600);
	if (x == -1)
	{
		return (0);
	}

	y = read(x, buf, letters);

	write(STDOUT_FILENO, buf, y);

	free(buf);
	close(x);

	return (y);
}
