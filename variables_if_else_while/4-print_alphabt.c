#include <stdio.h>
/**
* main - entry
*
* program prints the alphabet, print all the letters except q and e
*
* Return: always 0
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')

		{
			putchar(a);
		}
	}

	putchar('\n');

	return (0);
}
