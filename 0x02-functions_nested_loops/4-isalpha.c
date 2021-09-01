#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - test for character or not
 * @c: the character to be tested
 * Desciption: test for alphanumeric
 * Return: On success 1.
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
