#include "main.h"

/**
 * _puts - prints a string
 * @str: character argument
 * Return: none
 */
void _puts(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
