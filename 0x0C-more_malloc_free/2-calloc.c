#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills the first @n bytes of the memory area pointed to by @s with
 * the constant byte @b.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * _calloc - Allocates memory for an array of @nmemb elements of @size bytes
 * each and returns a pointer to the allocated memory. The memory is set to
 * zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: If successful, a pointer to the allocated memory. Otherwise, NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
