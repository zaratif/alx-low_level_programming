#include <stdio.h>
#include "main.h"

/**
 * _putchar - write the char c to stdout
 *
 * @c: the char to print
 *
 * Return: O success 1 or else -1 and errno is set appropriately
 */
int _putchar(char c)
{
	Return(write(1, &c, 1));
}
