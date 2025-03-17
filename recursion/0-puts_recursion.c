#include "main.h"

/**
*_puts_recursion - Prints a string.
*@s: The given string
*
*Return: void.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchsat('\n');
	else
	{
		_putchar(*s);
		_putchar(s + 1);
	}
}
