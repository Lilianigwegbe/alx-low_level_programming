#include "main.h"

/**
 * _strlen - Entry point
 * @s: String to be counted
 * A function that returns the length of a string
 * Return: Number of characters in the string.
 */
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
{
count++;
}
return (count);
}
