#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 * Description: sorts in alphabetical order [lowercase-descending]
 * Return: returns zero after printing all
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}
	putchar('\n');

	return (0);
}
