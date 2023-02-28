 #include "main.h"

/**
 * rev_string - Entry point
 * @s: String to be reversed.
 *
 * this c program reverses a string
 * return: Nothing
 */
void rev_string(char *s)
{
int len = _strlen(s);
int curr;
char tmp;
/* With pointers */
for (curr = 0; curr < len / 2; curr++)
{
tmp = *(s + curr);
*(s + curr) = *(s + (len - 1 - curr));
*(s + (len - 1 - curr)) = tmp;
}
}
/**
 * _strlen - Entry point
 * @s: String to be counted
 *
 * This program counts the length of
 * a string by counting each character
 * until the null character is encountered.
 *
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
