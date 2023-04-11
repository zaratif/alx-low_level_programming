#include <stdio.h>
#include "main.h"

/**
 * main - Printing the num of arguments passed to the program.
 *
 * @argc: The num of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Alaways 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
