#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * This is a C program.
 * It generates a random integer,
 * and prints to stdout,
 * the last digit of the number
 *
 * Return: Exit code 0
 * Return: Success Code 0
 */

int main(void)
@@ -22,7 +22,7 @@ int main(void)
	n = rand() - RAND_MAX / 2;

	/* We find the last digit using the modulus operator */
	l = abs(n % 10);
	l = n % 10;

	if (l > 5)
	{