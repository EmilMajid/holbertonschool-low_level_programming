#include "main.h"

/**
*puts_half - Writes the second half of the string.
*@str: the string that should be written.
*
*Return: void.
*/
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length + 1) / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
