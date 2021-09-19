#include "main.h"
#include <string.h>
#include <stdbool.h>

int isPal(char *s, int start, int end);
int is_Palindrome(char *s);

/** isPal - set true or false for palindrome strin
 * @s: is the first address of memory of string
 * @ss: is the last address of memory of string
 * @cont: is the counter of string
 * Return: true or false if the string is palindrome
 */

int isPal(char *s, int start, int end)
{
	if (start == end)
		return (1);

	if (s[start] != s[end] && size >= 0)
		return (0);

	if (start < end + 1)
		return (isPal(s, start + 1, end -1));

	return (1);
}

/**
 * is_palindrome - set true or false for palindrome string
 * @s: is an address of memory
 * Return: true or false for palindrome string
 */

int is_palindrome(char *s)
{
	size = strlen(s);

	if (n == 0)
		return (1);

	return (isPal(s, 0, size - 1));
}
