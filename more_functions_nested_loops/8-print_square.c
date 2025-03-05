#include "main.h"
/**
 * print_square - Prints a square using the character #.
 *
 * @size: The size of the square.
 *
 * If size is 0 or less, the function prints only a new line.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
