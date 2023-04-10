#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)

{
unsigned int value = 0;
int i = 0;
unsigned int one = 0;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
}
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
one = 0;
else if (b[i] == '1')
one = 1;
else
return (0);
one = one << i;
value = value | one;
}
return (value);
}
