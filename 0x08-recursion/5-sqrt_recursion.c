#include "main.h"

int extRecur(int n, int s);

/**
 * _sqrt_recursion - get the natural square root of a number
 * @n: is the natural number
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
	return (extRecur(n, 0));
}

/**
 * extRecur - to be able take two arguments and do teh recursion
 * @n: is the natural number
 * @s: is a counter
 * Return: The sqrt of a natural number
 */

int extRecur(int n, int s)
{
	if (s * s == n)
		return (s);

	else if (s * s > n)
		return (-1);

	else
		return (extRecur(n, s + 1));
}
