#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 * Description: sorts in alphabetical order [lowercase]
 * Return: returns zero after printing all
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar("\n");

	return (0);
}
