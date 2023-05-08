#include "main.h"
#include <string.h>

/**
  * append_text_to_file - appends a text to file
  * @filename: ...
  * @text_content: ...
  *
  * Return: 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_t;

	if (!filename)
		return (-1);

	file_t = open(filename, O_WRONLY | O_APPEND);
	if (file_t == -1)
		return (-1);

	if (text_content)
	{
		if (write(file_t, text_content, strlen(text_content)) == -1)
			return (-1);
	}

	close(file_t);
	return (1);
}
