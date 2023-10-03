#include "main.h"



/**
 * append_text_to_file - appends a test to file
 * @filename: file name
 * @text_content: text content
 * Return: an int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y;
	ssize_t x;

	if (!filename)
	{
		return (-1);
	}

	y = open(filename, O_WRONLY | O_APPEND);
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
