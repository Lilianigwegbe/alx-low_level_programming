#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that checks the endianness of a system
 * the function checks if the system is big endian or little endian
 *
 * Returns: 0 if it is big endian, 1 if it is little endian
 */

int get_endianness(void)
{
int a = 1;
char *b = (char *)&a;
int endian;
if (*b)
endian = 1;
else
endian = 0;
return (endian);
}
