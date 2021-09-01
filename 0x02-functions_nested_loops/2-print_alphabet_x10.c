#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - a module that prints the alphabet
 * Desciption: printing alphabets 10 times
 * Return: On success 0.
 */

void print_alphabet_x10 (void)
{
        char letter;
	int count = 10;

	while (count > 0)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
		_putchar('\n');
		count--;
	}
}
