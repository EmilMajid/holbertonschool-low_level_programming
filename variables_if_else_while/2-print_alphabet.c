#include <stdio.h>
/**
 * main - entry
 *
 * program prints the alphabet in lowercase
 *
 * * Return always 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
