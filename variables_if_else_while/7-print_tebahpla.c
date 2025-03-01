#include <stdio.h>
/**
* main - entry
*
* program that prints the lowercase alphabet in reverse, followed by a new line
*
* Return: always 0 
*/
int main(void)
{
	char a;
	
	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
		
	return (0);
}
