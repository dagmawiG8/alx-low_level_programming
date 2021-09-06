#include "main.h"

/**
 * swap_int - checks for uppercase character
 * @a, @b: the character to be checked
 * Return: none
 */

void swap_int(int* a, int* b)
{
	int temp;
	temp = *a;
	*a  = *b;
	*b = temp;
}
