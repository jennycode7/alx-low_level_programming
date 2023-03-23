#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - ...
 * @array: executable funtion array
 * @size: array size to use
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action  != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
