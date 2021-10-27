#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * get_bit - gets value of a specific bit position
  * @n: input long integer
  * @index: index of iteration
  * Return: returns value of the bit at the index
  */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
