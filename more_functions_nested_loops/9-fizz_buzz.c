#include <stdio.h>
/**
 * main - entry
 *
 * prints the numbers from 1 to 100,  a new line
 *
 * Multiples of three print Fizz and for the multiples of five print Buzz
 *
 * Numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
