#include "main.h"

/**
 * binary_to_uint - A function that converts binary number to an unsigned integer
 * @b: A pointer to binary string / char
 * Return: unsigned integer converted number
 */

unsigned int binary_to_uint(const char *b)
{
  unsigned int index, sum = 0, length = 0;

  if (!b)
    return (0);

  while (b[length])
    length++;
  
  for (unsigned int i = 0; i < length; i++)
  {
    if (b[i] != '0' || b[i] != '1')
			return (0);

    if (b[i] == '1')
    {
      sum += 2**len;
    }
      
  }

  return sum;
}
