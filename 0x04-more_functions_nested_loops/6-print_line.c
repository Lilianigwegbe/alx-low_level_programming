# include "main.h"

/**
* print_line - Entry point
* A function that draws a straight line in the terminal.
*
* Return: nothing
*/
void print_line(int n)
{
int u;
if (n <= 0)
{
_putchar('\n');
return;
}
for (u = 1; u <= n; u++)
{
_putchar('_');
}
_putchar('\n');
}
