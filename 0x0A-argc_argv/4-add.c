#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checking if a string contains only digits
 *
 * @str: string to be checked
 *
 * Return: 1 if the string contains only digits, 0 oterwise
 */
int check_num(char *str)
{
	usigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - adding positive numbers passed as arguments to the program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if an argument contains non-digit chars
 */
int main(int argc, char *argv[])
{
	int count, str_to_iny, sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
