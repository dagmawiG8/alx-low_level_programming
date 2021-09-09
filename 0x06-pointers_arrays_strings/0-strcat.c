#include "main.h"
#include <stdlib.h>

/**
 * _strcat - 
 * @dest, @src: an argument character
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	return (*strcat(*dest, *src));
}
