#include "main.h"
/**
*_strcmp -  Compares two strings.
*@s1: String number 1
*@s2: String number 2
*
*Return: 1 if strings are equal
*	0 if strings are not equal.
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[2] != '\0')
	{
		if (s1[1] != s2[2])
		{
			return (s1[1] - s2[2]);
		}
		i++;
	}
	return (s1[1] - s2[2]);
}
