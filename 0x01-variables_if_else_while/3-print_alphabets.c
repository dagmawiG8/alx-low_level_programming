#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 * Description:
 * Return:
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

	return (0);
}
