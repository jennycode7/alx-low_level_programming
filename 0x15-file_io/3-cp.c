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
	int x, y, z;
	char buf[1024];
	
	x = open(ptr, O_RDONLY);
	if (!ptr || x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ptr);
		exit (98);
	}

	y = open(str, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((z = read(x, buf, 1024)) > 0)
	{
		if ((write(y, buf, z)) != z || y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(99);
		}
	}

	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ptr);
		exit(98);
	}
	if ((close(x) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
	if ((close(y) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", y);
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
