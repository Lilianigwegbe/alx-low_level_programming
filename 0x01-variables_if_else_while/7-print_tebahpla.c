#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 0
*/

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = strlen(alphabets);
	int i;

	for (i = len; i >= 0; i--)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');

	return (0);
}

