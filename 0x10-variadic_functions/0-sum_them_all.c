#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list li;

	va_start(li, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(li, int);
	}

	va_end(li);

	return (sum);
}