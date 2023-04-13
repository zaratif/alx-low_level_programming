#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @n: number of bytes to allocate
 *
 * Return: pointer to allocated memory, exits with 98 if malloc fails
 */
void *malloc_checked(unsigned int n)
{
	void *ptr;

	ptr = malloc(n);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
