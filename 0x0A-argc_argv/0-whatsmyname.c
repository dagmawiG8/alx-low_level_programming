#include <stdio.h>

/**
 * main - print the name of this function
 * @argc: has the length of the arguments
 * @argv: has the arguments
 * Return: 0 to indicate a good working of the program
 */

int main (int argc, char *argv[])
{
	if(argc == 1)
		printf("%s\n", argv[argc - 1]);

	return (0);
}