#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where the data is copied to
 * @src: memory where the data is copied from
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
