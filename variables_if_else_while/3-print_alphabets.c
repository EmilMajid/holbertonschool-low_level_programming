#include <stdio.h>
/**
 * main - entry
 *
 * program prints the alphabet in lowercase and  uppercase
 *
 * Return: always 0
 */
int main(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)

	{
		putchar(a);
	}

	for (A = 'A'; A <= 'Z'; A++)

	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
