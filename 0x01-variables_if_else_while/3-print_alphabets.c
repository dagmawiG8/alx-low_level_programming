#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 * Description: sorts lowercase then uppercase letters
 * Return: returns zero after successfully printing them all
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
        {
        putchar(letter);
        }

	for (letter = 'A'; letter <= 'Z'; letter++)
        {
        putchar(letter);
        }
	putchar("\n");

	return (0);
}
