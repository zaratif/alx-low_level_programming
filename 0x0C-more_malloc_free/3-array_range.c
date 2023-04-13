#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers with
 * values ranging from min to max
 *
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}

	return (array);
}
