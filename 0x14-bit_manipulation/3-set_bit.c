#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: a pointer to an unsigned long int representing the number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it is successful or -1, if an error occurs
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num;
if (index > 63)
return (-1);
num = 1 << index;
*n = *n | num;
return (1);
}
