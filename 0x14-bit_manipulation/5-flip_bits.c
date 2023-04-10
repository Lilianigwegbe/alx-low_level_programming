#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: a number
 * @m: another number
 * Return: the number of bits to flip
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flips;
int num = 0;
flips = n ^ m;
while (flips != 0)
{
num += flips & 1;
flips >>= 1;
}
return (num);
}
