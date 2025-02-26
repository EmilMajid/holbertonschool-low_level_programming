#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	printf("char: %zu byte\n", sizeof(char));
	printf("int: %zu byte\n", sizeof(int));
	printf("long int: %zu byte\n", sizeof(long int));
	printf("long long int: %zu byte\n", sizeof(long long int));
	printf("float: %zu byte\n", sizeof(float));
	return (0);
}
