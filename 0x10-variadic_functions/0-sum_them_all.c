#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all numeric arguments
 * @n: num of parameters passed to the function
 * @...: variable number of parameters to calculate the sum
 *
 * Return: if n == 0 - 0, or else the sum of all numeric arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
