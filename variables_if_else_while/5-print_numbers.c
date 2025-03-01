#include <stdio.h>
/**
* main - entry
* prints numbers of base 10 starting from 0, followed by a new line
*
* Reteurn: always 0
*/
int main(void)
{

	int q;

	for (q = '0'; q <= '9'; q++)
	{
		putchar(q);
	}

	putchar('\n');

	return (0);
}
