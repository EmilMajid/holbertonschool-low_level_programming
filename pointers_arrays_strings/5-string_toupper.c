#include "main.h"
/**
**string_toupper - Changes the lowercase letters of a string to upper.
*@s: String to be changed
*
*Return: Uppercased string.
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
		i++;
	}
	}

	return (s);
}
