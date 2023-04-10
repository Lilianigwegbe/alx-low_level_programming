#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: the number to set
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if successful, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
num = 1UL << index;
*n &= ~num;
return (1);
}
