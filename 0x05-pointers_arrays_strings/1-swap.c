#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

void swap_int(int *a, int *b)
{
	int x, y, temp;
	
	x = &a;
	y = &b;

	temp = *a;
	*a  = *b;
	*b = temp;

}
