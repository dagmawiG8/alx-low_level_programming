#include "main.h"

/**
 * cap_string - captilizes all words of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] == 32)
		{
			if (s[i+1] >= 'a' && s[i+1] <= 'z')
				s[i+1] = s[i+1] - 32;
		}
	}

	return (s);
}
