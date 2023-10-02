#include "main.h"


/**
 * read_textfile - reads a file
 * @filename: file name
 * @letters: number of words
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int y, z;
	ssize_t x;
	char *store;


	if (filename == NULL)
	{
		return (0);
	}

	y = open(filename, O_RDONLY, 0600);
	if (y == -1)
	{
		return (0);
	}

	store = malloc(sizeof(char) * letters);
	if (store == NULL)
	{
		return (0);
	}
	x = read(y, store, letters);
	if (x == -1)
	{
		return (0);
	}

	z = write(STDOUT_FILENO, store, x);
	if (z == -1)
	{
		return (0);
	}


	free(store);
	close(y);

	return (x);
}
