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
    char *b = (char *)&a;
    int little_endian = (*b == 1);
    return little_endian;
}
