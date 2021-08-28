#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 * Description: sorts in alphabetical order [lowercase]
 * Return: returns zero after printing all
 */

int main(void)
{
	int ascii;
	char letter;

	for (ascii = 48; ascii <= 57; ascii++)
		putchar(ascii);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
