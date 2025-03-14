#include "main.h"
/**
* print_triangle - Prints a triangle using the character '#'
*
* @size: The size of the triangle
*
* Description: If size is 0 or less, the function prints only a new line.
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
