#include "main.h"

/**
  * flip_bits - calculates the number of bits needed
  * to get from one number to another
  * @n: base number
  * @m: number to transform to
  * Return: the number of bit transformations needed
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  int count = 0;

  while (n > 0 || m > 0)
  {
    int t1 = (n&1);
    int t2 = (m&1);
 
    if (t1 != t2){
      count++;
    }

    n >>= 1;
    b >>= 1;
  }

  return count;
