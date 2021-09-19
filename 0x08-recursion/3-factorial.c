#include "main.h"

/**
 * factorial - get the factorial of a given number
 * @n: is the number which get the factorial
 * Return: The factorial of n
 */

int factorial(int n)
{
	int f = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
	{
		f = n * factorial(n - 1);
		return (f);
	}
}
