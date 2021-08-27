#include <stdio.h>
#include <unistd.h>
/**
 * main - entry
 * Description: prints a text to stderr without printf or puts
 * Return: returns value 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
