#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size @size and assign
 * each element to char @c
 * @size: size of array to be created
 * @c: character to be assigned to each element of array
 *
 * Return: pointer to array, NULL if failed to allocate memory
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
