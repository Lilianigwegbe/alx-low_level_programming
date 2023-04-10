#include <stdio.h>
#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: a number
 * @index: is the index, starting from 0 of the bit you want to set
 * Returns: if it works, 1 or if an error occurs, -1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num;
if (index > 63)
return -1;
num = 1 << index;
*n = *n | num;
return 1;
}


