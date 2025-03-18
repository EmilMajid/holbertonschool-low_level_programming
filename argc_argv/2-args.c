#include <stdio.h>

/**
 * main - Prints all arguments passed into the program.
 * @argc: Count of the arguments.
 * @argv: Array of the pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
