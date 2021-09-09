#include "main.h"
#include <stdlib.h>

/**
 * _strcat - 
 * @dest, @src: an argument character
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	static char *res = strcat(*dest, *src);
	return (res);
}
