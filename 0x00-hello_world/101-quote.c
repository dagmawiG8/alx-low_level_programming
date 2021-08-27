#include <stdio.h>

/**
 * main - entry
 * Description: prints a text to stderr without printf or puts
 * Return: returns value 1
 */

int main(void)
{
	write(1,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",50);

	return (1);
}
