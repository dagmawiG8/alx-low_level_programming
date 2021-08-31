#include "main.h"
#include <stdio.h>

/**
 * main - entry
 * Desciption: printing alphabets.
 * Return: On success 0.
 */

int main (void)
{
	void print_alphabet(void)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);	
		}
	}

	return (0);
}
