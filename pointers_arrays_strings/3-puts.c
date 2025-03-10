#include "main.h"
/**
* _puts - Writes the string.
*
* @str: the string that should be written
*
* Return: void.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
