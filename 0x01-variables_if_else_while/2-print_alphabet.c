#include <stdio.h>
/**
 * main - lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
