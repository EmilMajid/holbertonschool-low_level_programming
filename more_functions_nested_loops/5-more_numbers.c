#include "main.h"
/**
* a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
*
* Prototype: void more_numbers(void)
*/
void more_numbers(void)
{
	int i = 0;
	int j = 0;
	for (j =  0; j < 10; j++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar('0' + i / 10);
		}
	_putchar('0' + i % 10);
	}
	_putchar('\n');
	}
}
