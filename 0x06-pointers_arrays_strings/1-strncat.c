#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcat -
 * @dest, @src: an argument character
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result;
	*result = strncat(*dest, *src, n);

	return (result);
}
