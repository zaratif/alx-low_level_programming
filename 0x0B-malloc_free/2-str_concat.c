#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first input string
 * @s2: second input string
 *
 * Return: pointer to concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len_s1 = 0, len_s2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len_s1) != '\0')
		len_s1++;
	while (*(s2 + len_s2) != '\0')
		len_s2++;

	concat_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (concat_str == NULL)
		return (NULL);

	while (i < len_s1)
	{
		*(concat_str + i) = *(s1 + i);
		i++;
	}

	while (j < len_s2)
	{
		*(concat_str + i) = *(s2 + j);
		i++, j++;
	}
	*(concat_str + i) = '\0';

	return (concat_str);
}
