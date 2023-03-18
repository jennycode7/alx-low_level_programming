#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be dulicated
 * Return: returns te=he copied string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, a;

	if (str == NULL)
	{
		return NULL;
	}
	
	i = 1;
	while (str[i])
	{
		i++;
	}
	ptr = malloc((sizeof(char) * i) + 1);

	for (a = 0; a < i; a++)
	{
		ptr[a] = str[a];
	}
	ptr[a] = '\0';

	return (ptr);
}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
