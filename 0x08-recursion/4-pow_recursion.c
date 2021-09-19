#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - get the value of x raised to power of y
 * @x: is the base
 * @y: is the power
 * Return: The x pow y
 */

int _pow_recursion(int x, int y)
{
	int power = 0;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
	{
		power = x * _pow_recursion(x, y - 1);
		return (power);
	}
}
