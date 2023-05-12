#include "main.h"

/**
 * append_text_to_file - apends text to file
 * @filename: file to append text to
 * @text_content: text to append to file
 * Return: returns 1 or -1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int x;

	if (!filename)
	{
		return (-1);
	}

	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		if ((write(x, text_content, strlen(text_content))) == -1)
		{
			return (-1);
		}
	}

	close(x);
	return (1);
}
