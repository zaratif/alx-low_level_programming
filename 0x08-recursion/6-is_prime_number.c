#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Checks if a num is prime.
 *
 * @n: The num to check
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)

	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - Recursive function to check if a number is prime.
 * @n: The number to check.
 * @i: The iterator.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
