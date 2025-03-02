#include "main.h"
/**
* print_alphabet - Prints the lowercase alphabet followed by a new line.
*
*/
void print_alphabet(void)
{
char s = 'a';

while (s <= 'z')
	{
	_putchar(s);
	s++;
	}
	_putchar('\n');
}
