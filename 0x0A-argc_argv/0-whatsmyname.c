#include <stdio.h>

/**
 * main - wites first argument
 * @argc: number of vectors
 * @argv: vector
 * Return: return 0
 */
int main(int argc, char **argv)
{
	argv[argc] = NULL;

	printf("%s\n", argv[0]);

	return (0);
}
