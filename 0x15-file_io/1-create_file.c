#include "main.h"

/**
 * create_file - function that creates file
 * @filename: filename
 * @text_content: text to append to file
 * Return: returns 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int x;

	if (!filename)
	{
		return (-1);
	}

	x = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		write(x, text_content, strlen(text_content));
	}

	close(x);
	return (1);
}
