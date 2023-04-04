#include "main.h"

/**
 * _strspn - Returns the length of a prefix substring
 * consisting of only characters in a given set.
 *
 * @s: The string to check for matches.
 * @accept: The set of characters to match against.
 *
 * Return: The number of bytes in the initial segment of @s which
 *         only consist of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (accept[j] == '\0')
			return (count);
	}

	return (count);
}
