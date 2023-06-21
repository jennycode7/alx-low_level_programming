#include "function_pointers.h"


/**
 * int_index - function pointer
 * @array: ...
 * @size: ...
 * @cmp: ...
 * Return: returns int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, x;

	if (size <= 0 || !cmp || !array)
	{
		return (-1);
	}

	while (i < size)
	{
		x = cmp(array[i]);
		if (x == 0)
		{
			break;
		}
		i++;
	}

	if (i >= size)
	{
		return (-1);
	}

	return (i);
}
