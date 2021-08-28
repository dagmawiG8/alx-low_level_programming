#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 * Description: sorts in alphabetical order [lowercase] except q and e.
 * Return: returns zero after printing successfully
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar("\n");

	return (0);
}
