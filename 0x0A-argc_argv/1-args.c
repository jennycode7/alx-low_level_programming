#include <stdio.h>


/**
 * main - write  number of vector
 * @argc: number of vector
 * @argv: vector
 * Return: returns o
 */
int main(int argc, char **argv)
{
	argv[argc] = NULL;

	printf("%d\n", argc - 1);

	return (0);
}
