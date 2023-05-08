#include "main.h"
#include <string.h>

/**
  * create_file - function that creates a file
  * @filename: ...
  * @text_content: ...
  *
  * Return: ...
  */

int create_file(const char *filename, char *text_content)
{
	int file_t;

	if (!filename)
		return (-1);

	file_t = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_t == -1)
		return (-1);

	if (text_content)
		write(file_t, text_content, strlen(text_content));

	close(file_t);
	return (1);
}
