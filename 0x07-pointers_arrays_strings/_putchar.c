#include"main.h"
#include <unistd.h>

/**
 * _putchar - Writes a char to stdout
 *
 * @c: Character to write
 *
 * @return: On success return the written character. On error, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
