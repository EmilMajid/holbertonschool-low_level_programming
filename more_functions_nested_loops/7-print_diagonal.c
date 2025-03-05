#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 * Return; nothing
 */
void print_diagonal(int n)
{
	int len, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (len = 0; len < n; len++)
	{
		for (space = 0; space < len; space++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
