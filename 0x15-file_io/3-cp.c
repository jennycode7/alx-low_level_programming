#include <stdio.h>
#include "main.h"


/**
  * duplicate_Folder - copies a file
  * @ptr: The source file
  * @str: The destination
  *
  * Return: ...
  */
void duplicate_Folder(const char *ptr, const char *str)
{
	int open_fi, foot, examine;
	char point[1024];

	open_fi = open(ptr, O_RDONLY);
	if (!ptr || open_fi == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ptr);
		exit(98);
	}

	foot = open(str, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((examine = read(open_fi, point, 1024)) > 0)
	{
		if (write(foot, point, examine) != examine || foot == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(99);
		}
	}

	if (examine == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ptr);
		exit(98);
	}

	if (close(open_fi) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_fi);
		exit(100);
	}

	if (close(foot) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", foot);
		exit(100);
	}
}
/**
  * main - Entry point
  * @ac: The argument count
  * @av: The argument vector
  *
  * Return: ...
  */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	duplicate_Folder(av[1], av[2]);
	exit(0);
}
