#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strncpy -
 * @dest, @src: an argument character
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
        char *result;
        *result = strncpy(*dest, *src, n);

        return (result);
}

