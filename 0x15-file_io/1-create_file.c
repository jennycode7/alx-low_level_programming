#include "main.h"



/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: text to write to file created
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int y;
	ssize_t x;


	if (!filename)
	{
		return (-1);
	}

	y = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (y == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		x = write(y, text_content, strlen(text_content));
		if (x == -1)
		{
			return (-1);
		}
	}

	return (1);
}
