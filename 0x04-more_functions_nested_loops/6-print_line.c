#include "main.h"

/**
 ** print_line -  draws a straight line in the terminal
 ** @n: parameter
 ** Return: void
 **/
void print_line(int n)

{
	int x;

	if (n <= 0)

	_putchar('\n');

	else
{
	for (x = 0; x < n; x++)
{
	_putchar('_');
}

	_putchar('\n');
}
}
