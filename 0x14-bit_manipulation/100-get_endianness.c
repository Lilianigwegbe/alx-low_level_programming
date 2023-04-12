#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int a;
char *b;
a = 1;
b = (char *)&a;
return (*b);
}
