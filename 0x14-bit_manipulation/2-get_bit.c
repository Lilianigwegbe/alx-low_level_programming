#include <stdio.h>
#include "main.h"

/**
* get_bit - a function that returns a bit value at a given index
* @index - the index from point 0 of the bit value
* @n - the origin of the bit value
* Returns: the bit value at index if it works, or -1 if an error occurrs
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bitsize;
if (index > 63)
return (-1);
bitsize = 1 << index;
if (n & bitsize)
return (1);
else
return (0);
}







