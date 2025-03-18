#include <stdio.h>

/**
*main - Prints the number of arguments passed into the program.
*@argc: Count of the arguments
*@argv: Array of the pointers to the arguments.
*
*Return: Always 0.
*/
int main(int argc, char **argv)
{
	_putchar("%d\n", argc - 1)
}
