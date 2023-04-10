#include <stdio.h>
#include "main.h"

/**
 * print_binary -  a function that prints the binary representation of a number
 * @n: a number to print in binary
 */

void print_binary(unsigned long int n)
{
unsigned long int bin = 0;
unsigned long int num = 0;
if (n == 0)
{
_putchar('0');
return;
}
while (n > 0)
{
bin = (bin << 1) + (n & 1);
num++;
n = n >> 1;
}
while (bin > 0)
{
_putchar((bin & 1) + '0');
bin = bin >> 1;
num--;
}
while (num > 0)
{
_putchar('0');
num--;
}
}

