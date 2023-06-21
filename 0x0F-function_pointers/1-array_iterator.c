#include "function_pointers.h"

/**
 * array_iterator - prints array
 * @array: ...
 * @size: ...
 * @action: ...
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || !action || !array)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
