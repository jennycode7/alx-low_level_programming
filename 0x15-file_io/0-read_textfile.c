#include "main.h"

/**
  * read_textfile - function that reads a text file
  * @filename: ...
  * @letters: ...
  * Return: returns wc
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_t, wc;
	char *cat = malloc(sizeof(char *) * letters);

	if (!cat)
		return (0);

	if (!filename)
		return (0);

	file_t = open(filename, O_RDONLY, 0600);
	if (file_t == -1)
		return (0);

	wc = read(file_t, cat, letters);
	write(STDOUT_FILENO, cat, wc);

	free(cat);
	close(file_t);
	return (wc);
}
