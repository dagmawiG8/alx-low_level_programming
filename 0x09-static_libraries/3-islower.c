#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - test for lowercase
 * @c: the character to be tested
 * Desciption: printing alphabets 10 times
 * Return: On success 1.
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
