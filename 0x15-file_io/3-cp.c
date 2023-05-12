#include "main.h"

void copy_file_to_file(const char *file_from, char *file_to);
/**
 * main - Entry point
 * @ac: number of arguments
 * @av: array of argument
 * Return: returns 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file_to_file(av[1], av[2]);
	return (0);
}

/**
 * copy_file_to_file - copies file content from source to destination
 * @file_from: source
 * @file_to: destination
 */
void copy_file_to_file(const char *file_from, const char *file_to)
{
	int x, y, z;
	char buf[1024];

	x = open(file_from, O_RDONLY);
	if (!file_from || x == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	y = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	while ((z = read(x, buf, 1024)) > 0)
	{
		if ((write(y, buf, z)) == -1 || y == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (z == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_from);
		exit(99);
	}

	if (close(y) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", y);
		exit(100);
	}

	if (close(x) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}

}
