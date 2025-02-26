#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	printf("char: %lu byte\n", sizeof(char));
	printf("int: %lu byte\n", sizeof(int));
	printf("long int: %lu byte\n", sizeof(long int));
	printf("long long int: %lu byte\n", sizeof(long long int));
	printf("float: %lu byte\n", sizeof(float));
	return (0);
}
