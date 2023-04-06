#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string recursively.
 *
 * @s: The string to be measured.
 *
 * Return: The legth of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
