#include <stdio.h>
/**
* main - entry
*
* prints digit numbers of base 10 starting from 0, followed by a new line
*
* Return: Always 0
*/
int main(void)
{

	int w;

	for (w = '0'; w <= '9'; w++)
	{
		putchar(w);
	}

	putchar('\n');

	return (0);
}
