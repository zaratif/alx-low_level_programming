#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains only digits
 * @str: string to be evaluated
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @str: string to be evaluated
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * handle_error - prints an error message and exits with status 98
 */
void handle_error(void)
{
	printf("%s\n", ERR_MSG);
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int len1, len2, len, i, carry, digit1, digit2, *result, printed = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		handle_error();
	len1 = _strlen(str1);
	len2 = _strlen(str2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = str1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
		{
			digit2 = str2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			printed = 1;
		if (printed)
			_putchar(result[i] + '0');
	}
	if (!printed)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
