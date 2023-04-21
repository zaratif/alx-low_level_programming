#include "function_ointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterates over an array and performs an
 * action on each element.
 *
 * @array: Pointer to the array to iterate over.
 * @size: Number of elements in the array.
 * @action: Pointer to the function that will perform the action.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
