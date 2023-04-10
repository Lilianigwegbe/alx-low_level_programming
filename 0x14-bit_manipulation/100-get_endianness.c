#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int a = 1;
char *c = (char *)&a;
int endian;
if (*c)
endian = 1;
else
endian = 0;
return (endian);
}
