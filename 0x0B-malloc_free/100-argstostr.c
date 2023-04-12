#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate command-line arguments into a string
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* compute total length of arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	/* allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);

	/* copy arguments into the string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
