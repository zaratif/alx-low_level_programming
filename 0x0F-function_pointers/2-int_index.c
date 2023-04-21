#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array and returns the
 * index if found.
 *
 * @array: pointer to the array to search in.
 * @size: number of elements in the array.
 * @cmp: pointer to the function to use to compare values.
 *
 * Return: the index of the first element for which the comparison
 * function returns a non-zero value. -1 if no element matches or
 * if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
